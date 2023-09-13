#include <stdio.h>


int main(void)
{
    int i = 0;
    double x = 0.0;
    double avg = 0.0;  //better average
    double navg = 0.0; //a naive average
    double sum = 0.0;
    printf("%10s%17s%17s%20s\n%10s%17s%17s%17s\n\n", "count", "item", "Average", "Naive average", "_____", "_____", "_____", "_____");
    for(i = 1;scanf("%lf", &x) == 1; ++i)
    {
        avg += (x - avg)/i;
        sum += x;
        navg = sum/i;
        printf("%5d%17e%17e%17e\n", i, x, avg, navg);
    }
    return 0;
}
