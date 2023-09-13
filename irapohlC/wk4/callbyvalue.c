#include<stdio.h>

int mult(int val)
{
    int copy = val;
    printf("%d\n", copy);
    return copy * 2;
}

int main(void)
{
    int k = 5;
    printf("k * 2 = %d\n", mult(k));
    printf("k = %d\n", k);
}
