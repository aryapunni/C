#include <stdio.h>

void recursion(int n)
{
    if(n == 0)
    {
        printf("Blast off\n");
    }
    else
    {
        printf("Blast off\n");
        recursion(n-1);
    }
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    recursion(n);
}
