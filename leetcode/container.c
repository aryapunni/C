# include <stdio.h>


void print_array(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

// array = [1, 2, 3, 5]