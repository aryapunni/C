#include<stdio.h>

long long factorial(int number);
long long factorial_recursion(int number);

int main(void)
{
  int number = 3;
  long long result = factorial(number);
  long long result_recursion = factorial_recursion(number);
  printf("result: %lld, result_recursion: %lld\n", result, result_recursion);
}

//-----using recursion-----//
long long factorial_recursion(int number)
{
  printf("The number: %d\n", number);
  long long result = 0;
  if(number < 2)
  {
    return 1;
  }
  else if(number == 2)
  {
    return 2;
  }
  result = number * factorial(number - 1);
  return result;
}
//--------not using recursion------//
long long factorial(int number)
{
  int n_factorial = number;
  if(number == 0)
  {
    return 1;
  }
  for(int i = number; i > 1; i--)
  {
    n_factorial = (n_factorial * (i - 1));
    printf("n_factorial: %d\n", n_factorial);
  }
  return n_factorial;
}
