// Write a program to perform addition of binary numbers.

#include <stdio.h>

int main()
{
    long long b1, b2;
    int carry = 0, sum, digit1, digit2;
    long long result = 0, place = 1;

    printf("Enter first binary number: ");
    scanf("%lld", &b1);

    printf("Enter second binary number: ");
    scanf("%lld", &b2);

    while (b1 > 0 || b2 > 0 || carry > 0)
    {
        digit1 = b1 % 10;
        digit2 = b2 % 10;

        sum = digit1 + digit2 + carry;

        result = result + (sum % 2) * place;
        carry = sum / 2;

        b1 = b1 / 10;
        b2 = b2 / 10;
        place = place * 10;
    }

    printf("Sum = %lld", result);

    return 0;
}