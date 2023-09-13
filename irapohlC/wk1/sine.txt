/* Program to print sine of the value provided by user
 * written by Arya
 * date 18/june/2021 */

#include <stdio.h>
#include <math.h>

int main()
{
    double angle = 0, sine = 0;
    //Getting input from user
    printf("Enter value between 0 and 1 for calculating sine\n");
    scanf("%lf", &angle);

    //checking the range of the input
    if((angle > 0) && (angle < 1))
    {
        sine = sin(angle);                       //Finding sine of the input
        printf("sin(%lf) = %lf\n", angle, sine);
    }
    else
    {
        printf("Value entered should be between 0 and 1\n"); //Warning for range outside 0 and 1
    }

    return 0;

}
