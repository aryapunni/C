#include <stdio.h>


// Function to print array
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

// Function for swaping
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// bubble sort algorithm
void bubble_sort(int array[], int size)
{
    int i, j = 0;
    int go_on = 0;
    for(i = 0;i < size; i++)
    {
        printf("Enter digit to go on");
        scanf("%d", &go_on);
        /* printf("%d\t", array[i]); */
        for(j = size - 1;j > 0; j--)
        {
            /* printf("%d,\t %d\n", array[j], array[j - 1]); */

            if(array[j] < array[j - 1])
            {
                swap(&array[j], &array[j - 1]);
            }
        }
        print_array(array, size);
    }
}


int main(void)
{
    int array[] = {72, 67, 88, 93, 58};
    print_array(array, 5);
    /* swap(&array[0], &array[2]); */
    /* print_array(array, 5); */
    bubble_sort(array, 5);

    return 0;
}
