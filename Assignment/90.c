// Write a program to find the smallest digit in a given number.


#include <stdio.h>

int main() {
    int n, digit, small = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit < small) {
            small = digit;
        }

        n = n / 10;
    }

    printf("Smallest digit is %d", small);

    return 0;
}