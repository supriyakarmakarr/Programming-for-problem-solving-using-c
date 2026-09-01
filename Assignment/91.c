// Write a program to find the second smallest digit in a given number.


#include <stdio.h>

int main() {
    int n, digit;
    int small = 9, second = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit < small) {
            second = small;
            small = digit;
        }
        else if (digit < second) {
            second = digit;
        }

        n = n / 10;
    }

    printf("Second smallest digit is %d", second);

    return 0;
}
