/*
 * 382. Write a function to check whether a number is prime.
 */

#include <stdio.h>

static int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    puts(isPrime(n) ? "Prime" : "Not prime");
    return 0;
}
