#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i;
    double value = 0;

    for(i = 1; i <30; i++)
    {
        interval = i/10.0;
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval))); //fabs() for floating point values
        printf("\n");
    }


    printf("\n+++++++\n");
    return 0;
}
