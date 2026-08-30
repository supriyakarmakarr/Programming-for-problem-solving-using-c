// Write a program to calculate the sum of digits till single digit of a given number.


#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10)
    {
        sum = 0;

        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }

        n = sum;
    }

    printf("Single digit sum = %d", n);

    return 0;
}