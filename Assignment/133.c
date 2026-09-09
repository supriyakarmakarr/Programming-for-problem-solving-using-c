// Write a program to convert a binary number to a decimal number.



#include <stdio.h>

int main()
{
    int binary, decimal = 0;
    int base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}