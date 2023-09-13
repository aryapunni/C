#include<stdio.h>

void print_array(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int is_monotonic(int * array, int size)
{
    int i = 0;
    int inc_mono = 0;
    int dec_mono = 0;
    while(i < size-1)
    {
        if(array[i] < array[i+1])
        {
            if(dec_mono == 1)
            {
                return 0;
            }
            else
            {
                inc_mono = 1;
                i++;
            }

        }
        else if (array[i] > array[i+1])
        {
            if(inc_mono == 1)
            {
                return 0;
            }
            else
            {
                dec_mono = 1;
                i++;
            }

        }
        else
        {
            i++;
        }
    }
    return 1;
}

int main(void)
{
    int array[] = {1, 2, 3, 4};


    int size = sizeof(array)/sizeof(int);

    print_array(array, size);
    print_array(array, size);
    return 0;
}
