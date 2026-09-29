/* Write a program to find the longest subarray with all distinct elements. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j, start, best = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* For each end position, find the most recent matching value before it. */
    for (i = 0; i < n; i++) {
        for (j = i - 1; j >= 0; j--)
            if (a[j] == a[i])
                break;
        start = j + 1;
        if (i - start + 1 > best)
            best = i - start + 1;
    }
    printf("Longest subarray with distinct elements has length %d.\n", best);
    return 0;
}
