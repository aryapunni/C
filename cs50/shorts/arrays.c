#include<stdio.h>

int main()
{
  char array[] = {'a', 'b', 'c'};
  printf("%p\n", array);
  printf("%p\n", &array);
  char *ch = array;
  printf("ch: %p &ch: %p\n", ch, &ch);
}
