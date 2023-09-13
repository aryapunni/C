#include <stdio.h>


unsigned int factorial_recursion(unsigned int n, unsigned int result)
{
    if(n == 1)
    {
        return result;
    }
    else
    {
        result = result * n;
        factorial_recursion(n - 1, result);
    }
}


unsigned int factorial_normal(unsigned int n)
{
    unsigned int factorial = n;
    for(int i = n - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;

}

int main(void)
{
    unsigned int n = 0;
    unsigned int factorial = 0;
    unsigned int result = 1;
    printf("enter value to calculate factorial: \n");
    scanf("%ld", &n);
    factorial = factorial_normal(n);
    printf("%ld\n", factorial);

    result = factorial_recursion(n, result);
    printf("result = %ld\n", result);

   
}
