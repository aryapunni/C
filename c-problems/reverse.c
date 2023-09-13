# include <stdio.h>

void print_array(int * array, int length)
{
    for(int i=0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int * print_reverse(int * array, int length)
{
    //print input array
    // compute len of array
    //loop untill i >= len - (i + 1)
    // swap i, len - (i + 1)
    // swap elements 
    int temp = 0;
    
    print_array(array, length);
    for(int i = 0; i < length - (i + 1); i++)
    {
        // printf("%d\t%d\n", array[i], array[length - (i + 0)]);
        temp = array[i];
        array[i] = array[length - (i + 1)];
        array[length - (i + 1)] = temp;

    }
    print_array(array, length);
    return array;
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array)/sizeof(int);

    print_reverse(array, length);
    print_array(array, length);
}