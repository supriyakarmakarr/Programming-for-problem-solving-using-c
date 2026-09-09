// Write a program to convert a decimal number to a binary number.


#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}