#include<stdio.h>


double cube(double digit)
{
    return (digit * digit * digit);
}

double square(double digit)
{
    return (digit * digit);
}


int main(void)
{
    double how_many = 0, i, j;
    int m = 0, n = 0;
    printf("enter how many squares and cube tables you need: \n");
    scanf("%lf", &how_many);

    for(i=0; i<how_many; i++)
    {
        for(j=0; j<10; j++)
        {

            printf("%lf\t%lf\t%lf\t\t%f*%f=%f\n", i+j/10, square(i+j/10), cube(i+j/10), j, i, i * j);
        }
    }

    for(m=0; m <= 10; m++)
    {
        for(n=0; n <= 10; n++)
        {
            printf("%d * %d = %d\n", n, m, m*n);
        }
    }
   

}
