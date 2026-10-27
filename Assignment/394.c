/*
 * 394. Write a function to sort an array in ascending order using bubble sort.
 */

#include <stdio.h>

static void bubbleSort(int *a, int n)
{
    for (int i = 0, swapped = 1; swapped && i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                int tmp = a[j]; a[j] = a[j + 1]; a[j + 1] = tmp;
                swapped = 1;
            }
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
    bubbleSort(a, n);
    printf("Ascending:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;
}
