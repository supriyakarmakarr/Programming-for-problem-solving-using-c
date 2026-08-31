// Write a program to find the sum of prime numbers up to N.



#include <stdio.h>

int main() {
    int n, sum = 0, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        count = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }

        if (count == 2)
            sum += num;
    }

    printf("Sum of prime numbers = %d", sum);

    return 0;
}