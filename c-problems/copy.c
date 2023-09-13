# include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int * array, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int search(int value, int * array, int length)
{

    int count = 0;
    // print_array(array, length);
    // printf("%d\n", length);

    for(int i = 0; i < length; i++)
    {

        printf("value: %d, array[i]: %d, i: %d\n", value, array[i], i);
        if(array[i] == value)
        {
            count++;
        } 
        
    }
    return count;
}

int * duplicate(int * array, int length)
{
    //print array
    //copy each element to a variable
    // binary search this variable in the array
    //if element exists increment duplicate variable by one
    // copy that element to an equal sized array 

    int count = 0;
    int dupe = 0;
    int * duplicates = malloc(length/2 * sizeof(int));
    memset(duplicates, 0, length/2);

    count = search(4, array, length);
    printf("%d\n", search(5, array, length));

    int value = 0;
    for (int i = 0; i < length; i++)
    {
        if(search(array[i], duplicates, length/2) == 0)
        {
            count = search(array[i], array, length);
            if(count > 1)
            {
                duplicates[dupe] = array[i];
                dupe++;
            }
        }

    }
    
    print_array(duplicates, length/2);

    return array;
}

int main(void)
{
    int array2[12] = {0};
    int array[] = {1, 2, 3, 5, 4, 1, 3, 6, 5, 6, 1, 4, 87, 87};
    int length = sizeof(array)/sizeof(int);
    duplicate(array, length);

    return 0;
}