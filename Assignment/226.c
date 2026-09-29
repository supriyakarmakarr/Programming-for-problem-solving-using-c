/* Write a program to sort an array using selection sort. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j, min, t;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Find the smallest remaining value and place it at the current position. */
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
