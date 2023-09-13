#include <stdio.h>

// Convert frhenheit to celsius

int main(void)
{
    int farhenheit, celcius;
    printf("Please enter farhenheit as an intiger\n");
    scanf("%d", &farhenheit);
    celcius = (farhenheit - 32)/ 1.8; // note conversio
    printf("\n%d fahrenheit is %d celcius\n\n", farhenheit, celcius);
    return 0;
}
