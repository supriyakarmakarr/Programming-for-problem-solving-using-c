/* Write a program to check whether an array is sorted. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, asc = 1, desc = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Check whether any neighboring values break ascending or descending order. */
    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1])
            asc = 0;
        if (a[i] > a[i - 1])
            desc = 0;
    }
    if (asc || desc)
        printf("Array is sorted (%s order).\n", asc ? "ascending" : "descending");
    else
        printf("Array is not sorted.\n");
    return 0;
}
