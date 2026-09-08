// Write a program to check whether a number is a strong number.


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

    if (sum == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);

    return 0;
}