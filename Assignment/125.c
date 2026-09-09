// Write a program to convert a decimal number to a hexadecimal number.


#include <stdio.h>

int main()
{
    int n, hex[32], i = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        int rem = n % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        n = n / 16;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }

    return 0;
}