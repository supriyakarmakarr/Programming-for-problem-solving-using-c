
#include <stdio.h>

double power(double b, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1.0 / power(b, -(n + 1)) / b;
    return b * power(b, n - 1);
}

int main(void) {
    double b;
    int n;

    printf("Enter base and exponent: \n");
    if (scanf("%lf %d", &b, &n) != 2) return 1;
    if (b == 0 && n < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Result: %g\n", power(b, n));
    return 0;
}
