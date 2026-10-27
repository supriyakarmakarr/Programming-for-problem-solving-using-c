/*
 * 395. Write a function to sort an array in descending order using selection sort.
 */

#include <stdio.h>

static void selectionSortDesc(int *a, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[max]) max = j;
        int tmp = a[i]; a[i] = a[max]; a[max] = tmp;
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
    selectionSortDesc(a, n);
    printf("Descending:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;
}
