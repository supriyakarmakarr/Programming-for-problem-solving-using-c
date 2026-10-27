/*
 * 393. Write a function to find largest & smallest element in an array.
 */

#include <stdio.h>

static void minMax(const int *a, int n, int *mn, int *mx)
{
    *mn = *mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < *mn) *mn = a[i];
        if (a[i] > *mx) *mx = a[i];
    }
}

int main(void)
{
    int a[1000], n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    int mn, mx;
    minMax(a, n, &mn, &mx);
    printf("Smallest = %d\nLargest = %d\n", mn, mx);
    return 0;
}
