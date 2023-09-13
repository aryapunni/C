# include<stdio.h>

void print_much(int count)
{
    while(count > 0)
    {
        printf("Very ");
        count--;
    }
}

int main(void)
{
    int repeat = 0;
    printf("enter the repeat times between 0 and 10: \n");
    scanf("%d", &repeat);
    printf("I Love You Very ");
    print_much(repeat);
    printf(" Much\n");

}
