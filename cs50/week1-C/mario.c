#include <stdio.h>
#include "cs50.h"

int main(void)
{
	int steps = 0;
	int i, j, k;
	printf("enter the number of steps\n");
	steps = GetInt();
	while(steps > 23 || steps < 0)
	{
		printf("enter the number of steps\n");
		steps = GetInt();
	}

	printf("number of steps: %d\n", steps);
	for(i = 1;i <= steps;i++)
	{
		for(j = 1;j <= steps-i; j++)
		{
			printf(" ");
		}
		for(k = 1;k <= i+1; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}

