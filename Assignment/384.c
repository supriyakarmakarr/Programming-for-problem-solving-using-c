#include <stdio.h>
static double power(double base, unsigned int exponent) {
    if (exponent == 0)
        return 1.0;
    double half = power(base, exponent / 2);
    double result = half * half;
    return exponent % 2 ? result * base : result;
}
int main(void) {
    double base;
    int exponent;
    printf("Enter base and integer exponent: ");
    if (scanf("%lf %d", &base, &exponent) != 2) {
        puts("Invalid input.");
        return 1;
    }
    if (base == 0.0 && exponent < 0) {
        puts("Zero cannot be raised to a negative power.");
        return 1;
    }
    double result = power(base, (unsigned int)(exponent < 0 ? -(long long)exponent : exponent));
    if (exponent < 0)
        result = 1.0 / result;
    printf("Result: %.10g\n", result);
    return 0;
}
