#include <stdio.h>
#include "cs50.h"
#include <math.h>

int main(void)
{
	int change = 0;
	float input = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int count = 0;
	printf("Enter the input: \n");
	input = GetFloat();
	while(input < 0)
	{
		//printf("Enter the input: \n");
		input = GetFloat();
	}
	change = round(input*100);
	//printf("%d\n", change);
	while(change >= 25)
	{
		change = change - 25;
		c1++;
	}
	//printf("count of 25: %d\n",c1);
	//printf("change left is: %d\n",change);
	while(change >= 10)
	{
		change = change - 10;
		c2++;
	}
	//printf("count of 10: %d\n",c2);
	//printf("change left is: %d\n",change);
	while(change >= 5)
	{
		change = change - 5;
		c3++;
	}
	//printf("count of 5: %d\n",c3);
    //printf("change left is: %d\n",change);
	while(change >= 1)
	{
		change = change - 1;
		c4++;
	}
	//printf("count of 1: %d\n",c4);
	//printf("change left is: %d\n",change);
	count = c1+c2+c3+c4;
	printf("%d\n", count);
}
