// Write a program to find the sum of first and last digit of a number.


#include <stdio.h>

int main()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    sum = first + last;

    printf("Sum of first and last digit = %d", sum);

    return 0;
}