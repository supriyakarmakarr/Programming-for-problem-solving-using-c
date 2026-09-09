// Write a program to print all numbers between 1 to N whose digit sum is even.


#include <stdio.h>

int main() {
    int N, i, n, sum;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        n = i;
        sum = 0;

        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }

        if (sum % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}