#include <stdio.h>
#include "cs50.h"


int main(void)
{
  int minute, water;
  printf("enter the time used to take bath:\n");
  minute = GetInt();
  water = minute*12;
  printf("water used is %d bottles\n", water);
}

