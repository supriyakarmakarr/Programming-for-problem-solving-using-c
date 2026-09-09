// Write a program to convert a hexadecimal number to a decimal number.


#include <stdio.h>
#include <math.h>

int main()
{
    char hex[20];
    int decimal = 0, i, value, length;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = 0;
    while (hex[length] != '\0')
        length++;

    for (i = 0; i < length; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;

        decimal = decimal * 16 + value;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}