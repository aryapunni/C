#include<stdio.h>
#include<stdlib.h>

void print_array(int * array, int length)
{
    for(int i=0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int * merge_array(int * array1,  int * array2, int length)
{
    print_array(array1, length);
    print_array(array2, length);

    int k = 0;
    int j = 0;
    
    int * merger = malloc(2* length * sizeof(int));

    // iterate through both arrays
    // compare first elements 
    // if i > j : place j in the merge array
    //          : increment j
    //          : increment k(the merge array iter)
    // if j > i : place i in merge array
    //          : increment i
    //          : increment k
    // if j == i: place i in merge array
    //          : increment k
    //          : place j in merege array
    //          : increment i and j
    for(int i = 0; i < length; i++)
    {
        while(j < length)
        {
            if(array1[i] > array2[j])
            {
                merger[k] = array2[j];
                k++;
                j++;
            }
        }
    }
    return array1;
}

int main(void)
{
    int array1[] = {1, 2, 4, 6, 10}; 
    int array2[] = {4, 5, 6, 9, 12}; 

    merge_array(array1, array2, sizeof(array1)/sizeof(int));

    return 0;
}