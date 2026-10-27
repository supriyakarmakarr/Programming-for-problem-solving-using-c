/*
 * 376. Write a function to find the square of a number.
 */

#include <stdio.h>

static long long square(int n)
{
    return (long long)n * n;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Square of %d = %lld\n", n, square(n));
    return 0;
}
