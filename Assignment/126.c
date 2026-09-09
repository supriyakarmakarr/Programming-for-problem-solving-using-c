// Write a program to convert an octal number to a binary number.


#include <stdio.h>

int main()
{
    int n, decimal = 0, base = 1, rem;
    
    scanf("%d", &n);

    // Convert octal to decimal
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        n = n / 10;
    }

    // Convert decimal to binary
    int binary[32], i = 0;

    if (decimal == 0)
    {
        printf("0");
        return 0;
    }

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}