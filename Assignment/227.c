/* Write a program to sort an array using merge sort. */
#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int x[100], i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
        x[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    while (i <= m)
        x[k++] = a[i++];
    while (j <= r)
        x[k++] = a[j++];
    for (i = 0; i < k; i++)
        a[l + i] = x[i];
}
void sort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        sort(a, l, m);
        sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main(void) {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Recursively sort smaller parts, then merge them in order. */
    sort(a, 0, n - 1);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
