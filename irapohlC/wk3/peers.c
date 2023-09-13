#include <stdio.h>

//to use 'sin()' function

#include <math.h>

int main()

{

// set the type of variable

float a, num;

// message for user

printf("Please enter a number from keyboard to find it's sin value\n");

scanf("%f", &num);

// storing the sin value

a = sin(num);

// printing the calculated value

printf("value in sin is = %.4f\n", a);

return 0;

}
