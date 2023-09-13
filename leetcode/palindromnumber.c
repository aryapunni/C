#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    //Seperate digits in the number
    //Divide by 10 untill the remainder is less than 10 or remainder is 0
    //1321  = 1000 + 300 + 20 + 1
    int num = 0;
    scanf("%d", &num);
    int rem = num;
    int digits = 0;
    int reverse = 0;
    while(num > 0)
    {
        rem = num%10;
        num = num/10;
        ++digits;
        reverse = reverse * 10;
        reverse = reverse + rem;
        printf("num: %d, rem: %d, reverse: %d\n", num, rem, reverse);

        // reverse = << rem;
    }


        /* printf("\n\n"); */

    //array = malloc(sizeof(int) * digits)/* ; */

    /* mul = pow(10, (digits)); */
    /* hold = num; */
    /* for(int i = 0; i < digits; i++) */
    /* { */
    /*     mul = mul / 10; */
    /*     rem = hold%10; */
    /*     hold = hold/10; */
    /*     reverse = (rem * mul) + reverse; */
    /*     printf("mu: %ld, reverse: %d\n", mul, reverse); */
    /* } */

    /* printf("reverse: %d\n", reverse); */

    if (num == reverse)
    {
        printf("PALINDROM\n");
        return 0;

    }
    else
    {
        printf("NOT PALINDROM\n");
        return 0;
    }

}
