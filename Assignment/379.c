/*
 * 379. Write a function to calculate the sum of digits of a number.
 */

#include <stdio.h>

static int digitSum(unsigned long long n)
{
    int sum = 0;
    for (; n; n /= 10) sum += n % 10;
    return sum;
}

int main(void)
{
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 1;
    printf("Sum of digits = %d\n", digitSum(n < 0 ? -(unsigned long long)n : (unsigned long long)n));
    return 0;
}
