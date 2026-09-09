// Write a program to convert an octal number to a decimal number.


#include <stdio.h>

int main()
{
    int n, decimal = 0, base = 1, rem;

    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        n = n / 10;
    }

    printf("%d", decimal);

    return 0;
}