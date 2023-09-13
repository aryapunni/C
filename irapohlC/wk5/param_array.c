#include<stdio.h>
#include<stdlib.h>

double sum(int *array, int size)
{
    double sum = 0.0;
    /* printf("size of array2222 = %d\n", sizeof(array)/sizeof(int)); */
    for(int i = 0; i < size; i++)
    {
        printf("array[i]----->%d\n", *(array + i));
        sum = sum + array[i];
    }
    printf("sum------->%lf\n", sum);
    return sum;


}


int main(void)
{
    int size = 0;
    int array2[13] = {0};
    double sum_val = 0.0;
    sum(array2, 2);
    printf("size of array2 = %d\n", sizeof(array2)/sizeof(int));
    printf("Enter the size for the array: \n");
    scanf("%d", &size);

    // allocate size for the array
    int *array;
    array = malloc(size * sizeof(int));

    /* printf("%d\n", sizeof(array)); */

    for(int i = 0; i < size; i++)
    {
        /* printf("Enter the array"); */
        scanf("%d", array + i);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    sum_val = sum(array, size);
    printf("\n");
    printf("sum = %lf, %lf\n", sum_val, sum(array, size));


}
