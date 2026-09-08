// Write a program to print all Armstrong numbers between 1 and N.


#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, num, temp, digit, digits, sum;

    printf("Enter Number : ");
    scanf("%d", &N);

    printf("Armstrong numbers between 1 and %d are:\n", N);

    for (i = 1; i <= N; i++)
    {
        temp = i;
        digits = 0;
        sum = 0;

        // Count number of digits
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }

        // Calculate sum of digits raised to power digits
        temp = i;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit, digits);
            temp = temp / 10;
        }

        // Check Armstrong number
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
