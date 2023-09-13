#include <stdio.h>

int main(void)
{
    unsigned char s = 5; //00000101
    unsigned char t = 1; //00000001
    printf("1: s = %d, t = %d\n", s, t);

    s = s >> 1;
    t = t << 1;
    printf("2 : s = %d, t = %d\n", s, t);
}
