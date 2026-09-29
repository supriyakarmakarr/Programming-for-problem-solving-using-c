/* Write a program to find the kth maximum and minimum array elements. */
#include <stdio.h>

int main(void) {
    int a[100], n, k, i, j, t;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("k must be between 1 and n.\n");
        return 0;
    }
    /* Sort a copy of the values so kth positions are easy to select. */
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    printf("%dth minimum = %d\n", k, a[k - 1]);
    printf("%dth maximum = %d\n", k, a[n - k]);
    return 0;
}
