/*
 * 377. Write a function to calculate the factorial of a number.
 */

#include <stdio.h>

static unsigned long long factorial(int n)
{
    unsigned long long f = 1;
    while (n > 1) f *= n--;
    return f;
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
    printf("%d! = %llu\n", n, factorial(n));
    return 0;
}
