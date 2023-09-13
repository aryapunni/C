#include <stdio.h>


//0, 1, 1, 2, 3, 5, 8, 13
//fn, f1, f0
//f0 = 0, f1 = 1, fn = 1 -- 1st
//f0 = 1, f1 = 1, fn = 2 -- 2nd
//f0 = 1, f1 = 2, fn = 3 -- 3rd
//f0 = 2, f1 = 3, fn = 5 -- 4th
unsigned int fibonacci_recursion(unsigned int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        printf("%d ", fibonacci_recursion(n-1) + fibonacci_recursion(n-2));
        return(fibonacci_recursion(n-1) + fibonacci_recursion(n-2));
    }
}

void fibonacci(unsigned int n)
{
    unsigned int fn, f1, f0;
    f1 = 1;
    f0 = 0;
    fn = 0;
    for(int i = 0; i < n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        printf("%d  ", fn);

    }
    printf("\n");
}

int main(void)
{
    unsigned int n = 0;
    printf("Enter the number for fibonacci: \n");
    scanf("%d", &n);
    fibonacci(n);
    fibonacci_recursion(n);
    printf("\n");

    return 0;

}
