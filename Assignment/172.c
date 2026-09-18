/*Write a program to calculate the sum of factorials of digits of a number. If the sum is
divisible by 10, print Factorial-Lucky Number.*/



#include <stdio.h>

int main() {
    int n, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    printf("Sum of factorials = %d\n", sum);

    if (sum % 10 == 0)
        printf("Factorial-Lucky Number");
    else
        printf("Not a Factorial-Lucky Number");

    return 0;
}
