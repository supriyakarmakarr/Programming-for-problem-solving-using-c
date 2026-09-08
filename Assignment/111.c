// Write a program to count total composite digits in a number.


#include <stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 4 || digit == 6 || digit == 8 || digit == 9)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total composite digits = %d", count);

    return 0;
}