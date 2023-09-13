#include<stdio.h>

extern int reps = 0; //Can be used anywhere in the functions - global variable

void f(void)
{
    static int called = 0;
    printf("f called %d\n", called);
    called++;
    reps = reps + called;
}
int main(void)
{
    auto int i = 1; //Auto storage class is just reduntat.
    const int Limit = 10; // const storage class value should not be changed during
                          // the execution of the code
    for(i=1; i < Limit; i++)
    {
        printf("i local = %d, reps global = %d\n", i, reps);
        f();
    }
    return 0;
}
