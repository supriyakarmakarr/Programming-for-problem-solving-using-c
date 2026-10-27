/*
 * 384. Write a function to calculate power of a number using recursion.
 */

#include <stdio.h>

static double power(double x, long n)
{
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);
    double half = power(x, n / 2);                    // fast exponentiation
    return n % 2 ? half * half * x : half * half;
}

int main(void)
{
    double x;
    long n;
    printf("Enter base and exponent: ");
    if (scanf("%lf %ld", &x, &n) != 2) return 1;
    printf("%g ^ %ld = %g\n", x, n, power(x, n));
    return 0;
}
