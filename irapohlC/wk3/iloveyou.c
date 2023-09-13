#include<stdio.h>

int main(void)
{
    int repeat;
    printf("enter the value for repeat between 10 and 0: \n");
    scanf("%d", &repeat);
    printf("I Love You Very ");
    while(repeat > 0)
    {
        printf("Very ");
        --repeat;
    }
    printf("Much\n");
    return 0;

}
