# include <stdio.h>
#include <math.h>


/* Function for printing sin and cos table */
void sine_cos(void)
{
    // Initialisation of angle
    double angle = 0.0, i = 0.0;

    // Print the table headings
    printf("%-10s%20s%20s\n\n", "angle", "sine", "cosine");

    //Print the table of sin(angle) and cos(angle) from 0.0 to 1.0
    for(i = 0.0; i <= 1.0;i = i + 0.1)
    {
        printf("%-10lf%20lf%20lf\n", i, sin(i), cos(i));
    }

}

int main(void)
{
    sine_cos(); // function call for sin cos table
    return 0;

}
