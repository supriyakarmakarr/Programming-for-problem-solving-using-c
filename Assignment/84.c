// Write a program to count total prime digits in a number.


#include <stdio.h>

int main() {
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;

        n = n / 10;
    }

    printf("Total prime digits = %d", count);

    return 0;
}