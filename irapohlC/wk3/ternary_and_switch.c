#include<stdio.h>

int main(void)
{
    int speed = 0;
    printf("enter your current speed: \n");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed <= 75) ? 75 : 90;
    switch(speed)
    {
        case 65:
            printf("\nNo ticket necessary\n");
            break;
        case 75:
            printf("\nProvide with speed ticket\n");
            break;
        case 90:
            printf("\nHigh speeding ticket for this person\n");
            break;
        default:
            printf("\nThere is no default case here\n");
    }
    return 0;
}
