// Write a program to calculate the product of digits of a given number.


#include <stdio.h>

int main()
{
    int n, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}