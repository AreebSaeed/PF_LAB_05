#include <stdio.h>
int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age.\n");
    } else {
        if (age <= 12) {
            printf("You are a Child.\n");
        } else if (age <= 19) {
            printf("You are a Teenager.\n");
        } else if (age <= 64) {
            printf("You are an Adult.\n");
        } else {
            printf("You are a Senior.\n");
        }
    }

    return 0;
}

