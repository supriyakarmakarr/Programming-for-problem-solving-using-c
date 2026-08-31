// Write a program to check whether a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}