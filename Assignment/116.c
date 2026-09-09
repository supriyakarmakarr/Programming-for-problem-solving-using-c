// Write a program to print all numbers between X and Y, whose reverse is greater than
// the original number.


#include <stdio.h>

int main() {
    int X, Y, i, n, rev;

    printf("Enter X and Y: ");
    scanf("%d %d", &X, &Y);

    for (i = X; i <= Y; i++) {
        n = i;
        rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n = n / 10;
        }

        if (rev > i) {
            printf("%d ", i);
        }
    }

    return 0;
}