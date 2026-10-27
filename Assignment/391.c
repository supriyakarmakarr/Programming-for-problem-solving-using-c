/*
 * 391. Write a function to calculate LCM of two numbers.
 */

#include <stdio.h>

static int gcd(int a, int b)
{
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a < 0 ? -a : a;
}

static long long lcm(int a, int b)
{
    if (!a || !b) return 0;
    long long r = (long long)(a / gcd(a, b)) * b;      // divide first to avoid overflow
    return r < 0 ? -r : r;
}

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("LCM = %lld\n", lcm(a, b));
    return 0;
}
