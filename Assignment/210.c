/* Write a program to find the intersection of two 1D arrays. */
#include <stdio.h>

int main(void) {
    int a[100], b[100], c[200], n, m, i, j, k = 0, found;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    /* Keep a value only if it occurs in both arrays and is not already saved. */
    for (i = 0; i < n; i++) {
        for (j = 0; j < m && a[i] != b[j]; j++)
            ;
        if (j < m) {
            for (j = 0; j < k && c[j] != a[i]; j++)
                ;
            if (j == k)
                c[k++] = a[i];
        }
    }
    printf("Intersection: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    if (!k)
        printf("Empty");
    return 0;
}
