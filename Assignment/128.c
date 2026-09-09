// Write a program to convert an octal number to a hexadecimal number.


#include <stdio.h>

int main()
{
    int n, decimal = 0, base = 1, rem;
    int hex[32], i = 0;

    scanf("%d", &n);

    // Octal to Decimal
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        n = n / 10;
    }

    // Decimal to Hexadecimal
    if (decimal == 0)
    {
        printf("0");
        return 0;
    }

    while (decimal > 0)
    {
        rem = decimal % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        decimal = decimal / 16;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }

    return 0;
}