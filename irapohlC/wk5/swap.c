#include <stdio.h>

void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("FUNCTION: a = %d, b = %d\n", a, b);
}

void swap_pointer(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("P-FUNCTION: *a = %d, *b = %d\n", *a, *b);
}

int main(void)
{
    int a = 10;
    int b = 20;
    printf("MAIN: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("MAIN 1: a = %d, b = %d\n", a, b);
    swap_pointer(&a, &b);
    printf("MAIN 2: a = %d, b = %d\n", a, b);
}
