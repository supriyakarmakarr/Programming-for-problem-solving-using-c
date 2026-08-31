// Write a program to print Fibonacciseries up to N terms.


#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}