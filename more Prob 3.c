#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter a character to encrypt: ");
    scanf(" %c", &ch);

    char encrypted = ch ^ 0xAA;
    printf("Encrypted character: %c\n", encrypted);

    char decrypted = encrypted ^ 0xAA;
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}

