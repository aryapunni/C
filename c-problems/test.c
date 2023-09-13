# include<stdio.h>

int is_thirty(int number1, int number2)
{
    if ((number1 == 30) || (number2 == 30))
    {
        return 1; 
    }
    else if (number1 + number2 == 30)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(void)
{
    int num1 = 31;
    int num2 = 32;

    printf("%d\n", is_thirty(num1, num2));
}