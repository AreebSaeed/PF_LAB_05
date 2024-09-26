#include <stdio.h>
int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number > 0) ? printf("The number is positive.\n") :
    (number < 0) ? printf("The number is negative.\n") :
    printf("The number is zero.\n");

    return 0;
}

