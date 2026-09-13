/*Write a program for a number is given. Calculate the difference between the sum of
even digits and odd digits. If the difference is zero, print Balanced Number else not.*/



#include <stdio.h>

int main()
{
    int n, digit;
    int evenSum = 0, oddSum = 0, difference;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit % 2 == 0)
            evenSum = evenSum + digit;
        else
            oddSum = oddSum + digit;

        n = n / 10;
    }

    difference = evenSum - oddSum;

    if(difference == 0)
        printf("Balanced Number");
    else
        printf("Not Balanced Number");

    return 0;
}