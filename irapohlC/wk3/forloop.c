#include<stdio.h>

int main(void)
{
    char c;
    int spaces = 0, digits = 0, alphabets = 0, others = 0, characters = 0;

    for(; (c = getchar()) != EOF; ++characters)
    {
        if(c == ' ')
        {
            ++spaces;
        }
        else if((c >= '0') && (c <= '9'))
        {
            ++digits;
        }
        else if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        {
            ++alphabets;
        }
        else
        {
            ++others;
        }
    }
    printf("characters = %d, spaces = %d, digits = %d, alphabets = %d, others = %d", characters, spaces, digits, alphabets, others);
}
