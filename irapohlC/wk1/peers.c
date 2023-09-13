nclude<stdio.h>   //input-output header file
#include<math.h>    //math header file contains sine function
int main(void)
{
 float number,result,angle;
 printf("Enter angle to display its sine value:");
 scanf("%f", &angle);
 number=angle*0.0174533;   //angle to radian convetion
 result=sin(number);
 printf("The sine of %f is %f",angle,result);
return 0;
}
