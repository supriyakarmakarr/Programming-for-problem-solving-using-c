// Write a program to print Nth Fibonacci number.

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Fibonacci number = %d", a);
    else if (n == 2)
        printf("Fibonacci number = %d", b);
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci number = %d", b);
    }

    return 0;
}