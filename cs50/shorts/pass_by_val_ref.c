#include<stdio.h>

void pass_by_value(int a)
{
  a = 4;
}

void pass_by_reference(int array[4])
{
  array[0] = 56;
}

int main(void)
{
  int a = 0;
  int value[4] = {0, 1, 2, 3};
  pass_by_value(a);
  pass_by_reference(value);
  printf("value of a: %d\n", a);
  printf("value of array val: %d\n", value[0]);
}
