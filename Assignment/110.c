// Write a program to find the difference between the sum of even and odd digits.


#include <stdio.h>

int main()
{
    int n, digit;
    int evenSum = 0, oddSum = 0, difference;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 == 0)
            evenSum = evenSum + digit;
        else
            oddSum = oddSum + digit;

        n = n / 10;
    }

    difference = evenSum - oddSum;

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits = %d\n", oddSum);
    printf("Difference = %d", difference);

    return 0;
}