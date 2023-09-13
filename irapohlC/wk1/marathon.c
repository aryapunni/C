#include <stdio.h>

// program to convert kilometers to marathon

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("marathon is %lf kilometers\n\n", kilometers);
    return 0;
}
