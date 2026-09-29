/* Write a program to find the union of two 1D arrays. */
#include <stdio.h>

int main(void) {
    int a[100], b[100], c[200], n, m, i, j, k = 0;
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
    /* Add each value once, first from the first array and then the second. */
    for (i = 0; i < n; i++) {
        for (j = 0; j < k && c[j] != a[i]; j++)
            ;
        if (j == k)
            c[k++] = a[i];
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < k && c[j] != b[i]; j++)
            ;
        if (j == k)
            c[k++] = b[i];
    }
    printf("Union: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}
