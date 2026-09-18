/*Write a program forsplit a number into two halves and compare their digit sums. Print
Equal Halves or Unequal Halves.*/


#include <stdio.h>

int main() {
    int n, temp, digits = 0, half, left, right;
    int sum1 = 0, sum2 = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    half = 1;

    for (int i = 1; i <= digits / 2; i++)
        half = half * 10;

    left = n / half;
    right = n % half;

    // Sum of digits of left half
    while (left > 0) {
        digit = left % 10;
        sum1 = sum1 + digit;
        left = left / 10;
    }

    // Sum of digits of right half
    while (right > 0) {
        digit = right % 10;
        sum2 = sum2 + digit;
        right = right / 10;
    }

    printf("Left half sum = %d\n", sum1);
    printf("Right half sum = %d\n", sum2);

    if (sum1 == sum2)
        printf("Equal Halves");
    else
        printf("Unequal Halves");

    return 0;
}
