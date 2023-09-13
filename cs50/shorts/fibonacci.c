#include<stdio.h>

int fibonacci_recursion(int n);
int fibonacci(int n);

int main(void)
{
  int n = 40;
  int result = fibonacci(n);
  //printf("result: %d\n", result);
  int result_recursion = fibonacci_recursion(n);
  printf("result: %d, result_recursion: %d\n", result, result_recursion);

}

int fibonacci_recursion(int n)
{
  int result = 0;
  int fibn;
  if(n == 0)
  {
    return 0;
  }
  else if(n == 1)
  {
    return 1;
  }

  fibn = fibonacci_recursion(n-1)+fibonacci_recursion(n-2);

  return fibn;
}

int fibonacci(int n)
{
  int fibn = 0;
  int fib1 = 0;
  int fib2 = 1;
  if(n == 0)
  {
    return fib1;
  }
  else if(n == 1)
  {
    return fib2;
  }
  for(int i = 1;i < n; i++)
  {
    printf("before: fibn: %d, fib1: %d, fib2: %d\n", fibn, fib1, fib2);
    fibn = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibn;
    printf("now: fibn: %d, fib1: %d, fib2: %d\n", fibn, fib1, fib2);
  }
  return fibn;
}
