#include<stdio.h>

int main(void)
{
    char c;
    int alphabet = 0, digit = 0, others = 0, space = 0;

    while((c = getchar()) != EOF)
    {
        printf("c = %c\n", c);
        if(c == ' ')
        {
            ++space;
        }
        else if ((c >= '0') && (c <= '9'))
        {
            ++digit;
        }
        else if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        {
            ++alphabet;
        }
        else
        {
            ++others;
        }
    }
    printf("alphabet : %d, digit: %d, space = %d, others: %d\n", alphabet, digit, space, others);
    return 0;
}
