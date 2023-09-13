#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    char *image = malloc(512 * sizeof(char));
    double size = 0;
    char first_byte = 0xff;
    char second_byte = 0xd8;
    char third_byte = 0xff;
    int image_counter = 0;
    char *filename = malloc(7 * sizeof(char));
    FILE *new_image = NULL;
    //checking for the correct arguments
    if(argc != 2)
    {
        fprintf(stderr, "./recover image\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[1];

    //open a file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    //find the size of the raw data
    fseek(inptr, 0, SEEK_END);
    size = ftell(inptr);

    //go back to the initial position
    rewind(inptr);


    double image_blocks = size/512;


    //iterate through raw data
    for(int i = 0;i < image_blocks;i++)
    {
        fread(image, 512, 1, inptr);
        if((*(image) == first_byte) && (*(image + 1) == second_byte) && (*(image) == third_byte))
        {
            // printf("%0x, %x, %x, %x\n", *(image), *(image + 1), *(image + 2), *(image + 3));

            sprintf(filename, "%03i.jpg", image_counter);
            new_image = fopen(filename, "w");
            if (new_image == NULL)
            {
                fprintf(stderr, "Could not open %s.\n", infile);
                return 2;
            }
            image_counter++;
        }
        if(new_image != NULL)
        {
            fwrite(image, 512, 1, new_image);
        }


    }
    fclose(new_image);

    free(image);
    free(filename);

}








///////////////////////////////////////////////////////////

        /*for(int j = 0; j < 512; j++)
        {
            // printf("0x%8x\t", *(image + j));

            if(image_counter == 0)
            {
                if(*(image + j) == first_byte)
                {
                    // printf("found the first byte\n");
                    image_counter++;

                }
            }
            else if(image_counter == 1)
            {
                if(*(image + j) == second_byte)
                {
                    image_counter++;
                    // printf("found the second byte\n");
                }
                else if(*(image + j) != first_byte)
                {
                    image_counter = 0;
                    // printf("not an image\n");
                }
            }
            else if(image_counter == 2)
            {
                if(*(image + j) == third_byte)
                {
                    image_counter++;
                    // printf("found an image\n");
                }
                else
                {
                    image_counter = 0;
                    // printf("not an image\n");
                }
            }

            if(image_counter == 3)
            {
                image_counter = 0;
                // printf("scan for new image\n");
            }
        }

    printf("size is: %f\n", size);
    printf("images: %f\n", image_blocks);

        */
