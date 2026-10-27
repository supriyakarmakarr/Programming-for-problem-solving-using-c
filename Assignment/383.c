/*
 * 383. Write a function to generate the Fibonacci series up to N terms.
 */

#include <stdio.h>

static void fibonacci(int n)
{
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%llu ", a);
        unsigned long long next = a + b;
        a = b;
        b = next;
    }
    putchar('\n');
}

int main(void)
{
    int n;
    printf("Enter number of terms (1-93): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 93) return 1;
    fibonacci(n);
    return 0;
}
