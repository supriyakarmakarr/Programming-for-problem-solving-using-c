// Write a program to find the second largest digit in a given number.


#include <stdio.h>

int main() {
    int n, digit;
    int largest = 0, second = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit > largest) {
            second = largest;
            largest = digit;
        }
        else if (digit > second) {
            second = digit;
        }

        n = n / 10;
    }

    printf("Second largest digit is %d", second);

    return 0;
}