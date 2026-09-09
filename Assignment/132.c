// Write a program to convert a binary number to an octal number.


#include <stdio.h>

int main()
{
    int binary, decimal = 0, octal = 0;
    int base = 1, rem, digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * base;
        binary = binary / 10;
        base = base * 2;
    }

    // Convert decimal to octal
    base = 1;
    while (decimal > 0)
    {
        rem = decimal % 8;
        octal = octal + rem * base;
        decimal = decimal / 8;
        base = base * 10;
    }

    printf("Octal number = %d", octal);

    return 0;
}