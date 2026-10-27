/*
 * 399. Write a function to copy one array to another.
 */

#include <stdio.h>

static void copyArray(int *dst, const int *src, int n)
{
    for (int i = 0; i < n; i++) dst[i] = src[i];
}

int main(void)
{
    int a[1000], n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    int copy[1000];
    copyArray(copy, a, n);
    printf("Copied array:");
    for (int i = 0; i < n; i++)
        printf(" %d", copy[i]);
    putchar('\n');
    return 0;
}
