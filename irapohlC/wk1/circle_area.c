#include <stdio.h>

# define PI 3.14159

int main(void)
{
    double radius = 0, area = 0;
    printf("enter the radius: \n");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("area = %lf\n", area);

}
