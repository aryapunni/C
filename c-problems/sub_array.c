#include<stdio.h>

void print_array(int * array, int length)
{
    for(int i=0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int * sub_array(int * array, int length, int sum)
{
    print_array(array, length);
    int sum_sub = 0;
    //two loops - First: to get the first index
    // second: to get the second index
    //if sum of second loop values = sum
        //break out of loop success
    //else if sum of second loop > sum
        //break out of loop and continue first loop
    // else continue second loop

    for(int i = 0;i < length; i++)
    {
        for(int j = i;j < length;j++)
        {
            sum_sub = sum_sub + array[j];
            // printf("sum sub: %d\n", sum_sub, array[j]);
            if(sum_sub == sum)
            {
                printf("SUCCESS: i: %d, j: %d\n", i, j);
                i = length;
                break;
            }
            else if(sum_sub > sum)
            {
                printf("NOT IN THIS SUB ARRAY\n");
                sum_sub = 0;
                break;
            }
            else if(sum_sub < sum)
            {
                printf("current sum: %d\n", sum_sub);
            }
        }
    }
    return array;
}


int main(void)
{
    int array[] = {15, 2, 4, 8, 9, 5, 10, 23};
    sub_array(array, sizeof(array)/sizeof(int), 15);
    return 0;

}