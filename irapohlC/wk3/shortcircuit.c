/*Program to evaluate and expression*/

#include <stdio.h>

int main(void)
{
    int outside, weather;
    printf("type 0 if you are inside and 1 if you are outside");
    scanf("%d", &outside);
    printf("type 1 if it is raining and 0 if it is not");
    scanf("%d", &weather);
    if (outside && weather)
    {
        printf("use an umbrella\n");
    }
    else
    {
        printf("no need for an umbrella\n");
    }
    return 0;
}
