// Write a program to convert a decimal number to an octal number.


#include <stdio.h>

int main()
{
    int n, octal[32], i = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }

    return 0;
}