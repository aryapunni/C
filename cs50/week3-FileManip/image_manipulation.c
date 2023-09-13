#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  char array[5];
  // ensure proper usage
  if (argc != 3)
  {
      printf("Usage: copy infile outfile\n");
      return 1;
  }

  // remember filenames
  char *infile = argv[1];
  char *outfile = argv[2];


  // open input file
  FILE *inptr = fopen(infile, "r");
  if(inptr == NULL)
  {
    printf("input file error");
    return 1;
  }

//open output file
  FILE *outptr = fopen(outfile, "w");
  if(outptr == NULL)
  {
    printf("output file error");
    return 1;
  }

  //read from input file
  fread(array, sizeof(array), 1, inptr);
  for(int i = 0;i < 5;i++)
  {
    fseek(inptr, i + 1, SEEK_SET);
    fread(array, sizeof(array), 1, inptr);
    printf("%c\n", array[i]);

    //write to output file
    fwrite(array, sizeof(array)/5, 3, outptr);
  }

  fseek(inptr, -4, SEEK_END);
  fread(array, sizeof(array[0]), 1, inptr);
  printf("%c\n", array[0]);
}
