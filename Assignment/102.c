// Write a program to check whether a number is a perfect number.


#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("%d is a Perfect Number", n);
    else
        printf("%d is not a Perfect Number", n);

    return 0;
}