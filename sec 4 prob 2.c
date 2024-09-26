#include <stdio.h>
int main() 
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number) {
        count += number & 1;
        number >>= 1;
    }

    printf("Number of 1s in binary representation: %d\n", count);

    return 0;
}

