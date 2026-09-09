/*Write a program to check whether the given number is lucky or unlucky. If the sum of
its digits is divisible by 4, the number is considered lucky.*/


#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (sum % 4 == 0)
        printf("Lucky Number");
    else
        printf("Unlucky Number");

    return 0;
}