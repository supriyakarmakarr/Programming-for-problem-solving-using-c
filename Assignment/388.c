/*
 * 388. Write a function to calculate sum of first N natural numbers.
 */

#include <stdio.h>

static unsigned long long sumNatural(unsigned long long n)
{
    return n * (n + 1) / 2;
}

int main(void)
{
    long long n;
    printf("Enter N (0 to 4000000000): ");
    if (scanf("%lld", &n) != 1 || n < 0 || n > 4000000000LL) return 1;
    printf("Sum = %llu\n", sumNatural((unsigned long long)n));
    return 0;
}
