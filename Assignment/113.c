// Write a program to find the sum of digits of all numbers between 1 and N.


#include <stdio.h>

int main() {
    int N, i, n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        n = i;

        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
    }

    printf("Sum of digits = %d", sum);

    return 0;
}