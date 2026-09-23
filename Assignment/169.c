// Write a program to find the sum of squares of digits of a number.
// If the sum is a perfect square, print Square-Happy Number else not.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, sum = 0, root;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit;
        temp /= 10;
    }

    root = (int)sqrt(sum);

    printf("Sum of squares of digits = %d\n", sum);

    if (root * root == sum)
        printf("%d is a Square-Happy Number", n);
    else
        printf("%d is not a Square-Happy Number", n);

    return 0;
}