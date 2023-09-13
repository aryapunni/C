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
    printf("size is: %f\n", size);
    printf("images: %f\n", image_blocks);

    //iterate through raw data
    for(int i = 0;i < 4;i++)
    {
        fread(image, 512, 1, inptr);
        printf("%x, %x, %x, %x\n", *(image), *(image + 1), *(image + 2), *(image + 3));

        for(int j = 0; j < 512; j++)
        {
            // printf("0x%8x\t", *(image + j));
///////////////////////////////self designed pattern finding algo////////////////////

/////////finds the pattern 0xff, 0xd8, 00xff
////////if the pattern is found it is considered as a jpg image
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

///////////////////////////////self designed pattern finding algo////////////////////
        }
        // printf("\n\nend of one\n\n");
    }

    free(image);

}
