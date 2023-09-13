#include<stdio.h>
#include<stdlib.h>



void print_array(int * array, int size);

int * square_array(int * array, int size)
{
    int * array_new = malloc(size * sizeof(int));

    int i = 0;
    int k = size - 1;
    int j = size - 1;
    /* int array[] = {-12, 1, 1, 2, 3, 4}; */
    while(k >= 0)
    {

        if((array[i] * array[i]) > (array[j] * array[j]))
        {

            array_new[k] = array[i] * array[i];
            k--;
            i++;
        }
        else if((array[i] * array[i]) < (array[j] * array[j]))
        {

            array_new[k] = array[j] * array[j];
            k--;
            j--;
 
        }
        else if((array[i] * array[i]) == (array[j] * array[j]))
        {
            printf("array new\n");
            print_array(array_new, size);

            array_new[k] = array[j] * array[j];
            k--;
            array_new[k] = array[i] * array[i];
            k--;
            j--;
            i++;
        }

        // array[i] = array[i] * array[i];
    }


    /* array_new[k] = array[j] * array[j]; */
    return array_new;


}


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

int main(void)
{
    int array[] = {-12, 1, 2, 3, 4};


    int size = sizeof(array)/sizeof(int);

    print_array(array, size);
    int * array_new = square_array(array, size);
    print_array(array_new, size);
    return 0;
}
