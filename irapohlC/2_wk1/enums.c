#include<stdio.h>

enum day{
sun,
mon,
tue,
wed,
thur,
fri,
sat};

void print_day(enum day d)
{
    switch(d)
    {
        case sun:
            printf("today is sunday\n");
            break;
        case mon:
            printf("today is monday\n");
            break;
        case tue:
            printf("today is tuesday\n");
            break;
        case wed:
            printf("today is wednessday\n");
            break;
        case thur:
            printf("today is thursday\n");
            break;
        case fri:
            printf("today is friday\n");
            break;
        case sat:
            printf("today is saturday\n");
            break;
        default:
            printf("Error in the input value\n");

    }

}

void print_next_day(enum day d)
{
    d = (d + 1) % 7;
    print_day(d);
}
int main(void)
{
    enum day today = sat;
    print_day(today);
    print_next_day(today);
    print_day(7);
    return 0;
}
