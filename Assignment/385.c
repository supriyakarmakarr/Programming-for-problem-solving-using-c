/*
 * 385. Write a recursive function to find factorial of a number.
 */

#include <stdio.h>

static unsigned long long fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0 || n > 20) {
        puts("Enter a value between 0 and 20 (larger factorials overflow 64 bits)");
        return 1;
    }
    printf("%d! = %llu\n", n, fact(n));
    return 0;
}
