/*
 * 380. Write a function to reverse a number.
 */

#include <stdio.h>

static long long reverseNumber(int n)
{
    long long v = n < 0 ? -(long long)n : n, rev = 0;
    for (; v; v /= 10) rev = rev * 10 + v % 10;
    return n < 0 ? -rev : rev;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Reversed = %lld\n", reverseNumber(n));
    return 0;
}
