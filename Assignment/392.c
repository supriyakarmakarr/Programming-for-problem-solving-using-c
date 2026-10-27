/*
 * 392. Write a function to find sum of elements of an array.
 */

#include <stdio.h>

static long long sum(const int *a, int n)
{
    long long s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

int main(void)
{
    int a[1000], n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    printf("Sum = %lld\n", sum(a, n));
    return 0;
}
