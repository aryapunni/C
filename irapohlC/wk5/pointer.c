#include<stdio.h>

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    double sum = 0.0;
    double *ptr_sum = &sum;
    int *ptr_array = &array[0];
    for(int i=0; i<5; i++)
    {
        printf("%d   ", array[i]);
    }

    for(int i=0; i<5; i++)
    {
        sum = sum + array[i];
    }

    printf("sum = %lf, average = %lf\n", sum, sum/5);
    printf("%d, %d, %d\n", ptr_sum, ptr_array, array, ptr_array);
    printf("sum dereferencing: %lf\n", *ptr_sum);

    for(int i=0; i<5; i++)
    {
        printf("%d   ", *array + i);
    }

}
