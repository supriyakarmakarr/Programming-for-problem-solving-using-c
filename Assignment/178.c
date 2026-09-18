/*Write a program to find the difference between the largest and smallest digit of a
number. If the difference is a perfect number, print Perfect-Gap Number.*/


#include <stdio.h>

int main() {
    int n, digit, largest = 0, smallest = 9;
    int difference, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit > largest)
            largest = digit;

        if (digit < smallest)
            smallest = digit;

        n = n / 10;
    }

    difference = largest - smallest;

    // Find sum of proper divisors
    for (i = 1; i < difference; i++) {
        if (difference % i == 0)
            sum = sum + i;
    }

    printf("Difference = %d\n", difference);

    if (sum == difference)
        printf("Perfect-Gap Number");
    else
        printf("Not a Perfect-Gap Number");

    return 0;
}
