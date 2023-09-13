#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char buffer[12];
    fgets(buffer, 10, stdin);
    printf("%s\n", buffer);
    printf("%lu\n", strtoul(buffer, NULL, 0));
}