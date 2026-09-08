
// Write a program to calculate the sum of factorials of digits of a number.


#include <stdio.h>

int main()
{
    int n, temp, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    printf("Sum of factorials of digits = %d", sum);

    return 0;
}