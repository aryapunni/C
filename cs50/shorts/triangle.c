#include<stdio.h>

int is_a_triangle(int a, int b, int c)
{
  if((a <= 0) || (b <= 0) || (c <= 0))
  {
    return 1;

  }

  if((a+b<c) || (a+c<b) || (c+b<a))
  {
    //printf("hello world1");
    return 1;
  }
  return 0;
}

int main(void)
{
  int a, b, c;
  int r = 2;
  printf("enter a\n");
  scanf("%d", &a);
  printf("a is: %d\n", a);
  printf("enter b\n");
  scanf("%d", &b);
  printf("enter c\n");
  scanf("%d", &c);
  r = is_a_triangle(a, b, c);
  printf("r is: %d\n", r);
}
