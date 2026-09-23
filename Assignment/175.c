/*Write a program to print the sum of digits placed at prime positions (2nd, 3rd, 5th...)
in a number.*/


#include <stdio.h>

int main() {
    int n, digit, pos = 0, sum = 0;
    int i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        pos++;

        isPrime = 1;

        if (pos < 2)
            isPrime = 0;
        else {
            for (i = 2; i < pos; i++) {
                if (pos % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
            sum = sum + digit;
    }

    printf("Sum = %d", sum);

    return 0;
}
