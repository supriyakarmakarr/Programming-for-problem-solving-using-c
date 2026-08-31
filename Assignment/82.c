// Write a program to find sum of prime digits present in given number N.


#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            sum += digit;

        n = n / 10;
    }

    printf("Sum of prime digits = %d", sum);

    return 0;
}