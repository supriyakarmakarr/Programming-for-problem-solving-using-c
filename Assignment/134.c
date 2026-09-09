// Write a program to convert a binary number to a hexadecimal number.


#include <stdio.h>

int main()
{
    int binary, decimal = 0, digit;
    int base = 1;

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

    // Convert decimal to hexadecimal
    printf("Hexadecimal number = %X", decimal);

    return 0;
}