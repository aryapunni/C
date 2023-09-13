// array = [1, 2, 3, 4]

#include<stdio.h>



void print_array(int * array, int size)
{

    for(int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", i);
    }

    printf("\n");
}


void rotate(int * array, int size, int rotations)
{
    int temp = 0;
    int j = 0;
    int shift = 0;
    for(int i=0; i < rotations; i++)
    {
        j = size - 1;
        shift = 0;

        temp = array[j];
        while(shift < size)
        {
            array[j + 1] = array[j];
            j--;
            shift++;

        } 
        array[0] = temp;

    }

}

int main(void)
{
    int array[] = {32, 21, 23, 45, 78};
    int size = sizeof(array)/sizeof(int);
    print_array(array, size);
    rotate(array, size, 6);
    print_array(array, size);
    return 0;
}