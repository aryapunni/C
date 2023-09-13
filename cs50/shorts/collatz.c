#include<stdio.h>

int collatz(int n);

int main(void)
{
  int result = 0;
  int n = 5;
  result = collatz(n);
  printf("result: %d\n", result);
}

int collatz(int n)
{
  if(n == 1)
  {
    return 0;
  }
  else if(n%2 == 0)
  {
    return 1 + collatz(n/2);
  }
  else if((n + 1)%2 == 0)
  {
    return 1 + collatz((3*n)+1);
  }
}
