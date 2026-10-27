/*
 * 386. Write a function to count digits in a number.
 */

#include <stdio.h>

static int countDigits(long long n)
{
    int count = 1;
    for (; n / 10; n /= 10) count++;
    return count;
}

int main(void)
{
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 1;
    printf("Number of digits = %d\n", countDigits(n));
    return 0;
}
