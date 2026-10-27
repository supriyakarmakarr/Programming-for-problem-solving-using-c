/*
 * 400. Write a function to merge two arrays.
 */

#include <stdio.h>
#include <string.h>

static int readArray(int *a)
{
    int n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 500) return -1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return -1;
    return n;
}

static void mergeArrays(int *out, const int *a, int n, const int *b, int m)
{
    memcpy(out, a, n * sizeof *a);
    memcpy(out + n, b, m * sizeof *b);
}

int main(void)
{
    int a[500], b[500], merged[1000];
    int n = readArray(a), m = readArray(b);
    if (n < 0 || m < 0) return 1;
    mergeArrays(merged, a, n, b, m);
    printf("Merged array:");
    for (int i = 0; i < n + m; i++)
        printf(" %d", merged[i]);
    putchar('\n');
    return 0;
}
