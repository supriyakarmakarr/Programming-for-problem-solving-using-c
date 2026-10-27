/*
 * 390. Write a function to calculate GCD of two numbers.
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

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
