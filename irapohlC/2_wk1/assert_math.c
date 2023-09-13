#include<assert.h> // Contains assert()
#include<stdio.h> // contains getc() putc() etc

int main(void)
{
    double x, y;

    while(1)
    {
        printf("enter value for x and y: \n");
        scanf("%lf\n%lf", &x, &y);
        assert(y != 0);
        printf("x/y = %lf\n", x/y);
    }
    return 0;
}
