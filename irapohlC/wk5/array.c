#include<stdio.h>

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    double sum = 0.0;

    for(int i=0; i<5; i++)
    {
        printf("%d   ", array[i]);
    }

    for(int i=0; i<5; i++)
    {
        sum = sum + array[i];
    }

    printf("sum = %lf, average = %lf\n", sum, sum/5);

}
