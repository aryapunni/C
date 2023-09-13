#include <stdio.h>

int main(void)
{
    char new[4] = {'a', 'b', 'c', 'd'};
    char temp;
    int size = sizeof(new) - 1;
    printf("%d\n", size);

    int i = 1;
    int j = 2;
    int n = 0;
    printf("___%d____\n\n\n", n = (i,j));

    for(int i = 0; i < 2; i++)
    {
        /* printf("%c, %c\n", new[i], new[size - i]); */
        temp = new[i];
        new[i] = new[size - i];
        new[size - i] = temp;
        printf("%c, %c\n", new[i], new[size - i]);
    }
    for(int i = 0; i < 4; i++)
    {
        printf("inversed: %c\n", new[i]);
    }
    return 0;
}
