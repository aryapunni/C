#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   int value = 0;

   char * RomanNum = malloc(sizeof(char) * 16);
   char prev_char = 'N';

    scanf("%s", RomanNum);
    printf("Roman Number: %s\n", RomanNum);
    int length = strlen(&RomanNum[0]);
    printf("%d\n", length);
    for(int i = 0;i < length;i++)
    {
        switch (RomanNum[i])
        {
            case 'I':
                value = value + 1;
                prev_char = 'I';
                break;
            case 'V':
                if(prev_char == 'I')
                {
                    value = value + 3;
                }
                else
                {
                    value = value + 5;
                }

                prev_char = 'V';
                break;

            case 'X':
                if(prev_char == 'I')
                {
                    value = value + 8;
                }
                else
                {
                    value = value + 10;
                }
                prev_char = 'X';
                break;
            case 'L':
                if(prev_char == 'X')
                {
                    value = value + 30;
                }
                else
                {
                    value = value + 50;
                }
                prev_char = 'L';
                break;
            case 'C':
                if(prev_char == 'X')
                {
                    value = value + 80;
                }
                else
                {
                    value = value + 100;
                }
                prev_char = 'C';
                break;
            case 'D':
                if(prev_char == 'C')
                {
                    value = value + 300;
                }
                else
                {
                    value = value + 500;
                }
                prev_char = 'D';
                break;
            case 'M':
                if(prev_char == 'C')
                {
                    value = value + 800;
                }
                else
                {
                    value = value + 1000;
                }
                prev_char = 'M';
                break;
            default:
                printf("Not a Roman Number");
                break;
        }

    }

    printf("value: %d\n", value);

    return 0;
}
