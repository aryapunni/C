#include <stdio.h>

// This is not a working code

void print_array(int * array, int length)
{
    for(int i=0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void sum_sub_array(int * array, int length)
{
    print_array(array, length);

    int sum = 0;
    int max_sum = array[0];
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
        if(sum > max_sum)
        {
            max_sum = sum;
        }

    }
    printf("max sum = %d\n", max_sum);   
 

}
int main(void)
{
    int array[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int length = sizeof(array)/sizeof(int); 

    sum_sub_array(array, length);
}