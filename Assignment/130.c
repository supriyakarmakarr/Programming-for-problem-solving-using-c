// Write a program to convert a hexadecimal number to an octal number.



#include <stdio.h>

int main()
{
    char hex[20];
    int decimal = 0, i = 0, digit;
    int octal[32], j = 0;

    scanf("%s", hex);

    // Hexadecimal to Decimal
    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else
            digit = hex[i] - 'a' + 10;

        decimal = decimal * 16 + digit;
        i++;
    }

    // Decimal to Octal
    if (decimal == 0)
    {
        printf("0");
        return 0;
    }

    while (decimal > 0)
    {
        octal[j] = decimal % 8;
        decimal = decimal / 8;
        j++;
    }

    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }

    return 0;
}