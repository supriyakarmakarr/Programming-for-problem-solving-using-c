#include <stdio.h>

int main(void) {
    int n, i, j, temp;

    printf("Enter size of Array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        int min = a[i];
        int minidx = i;

        for (j = i + 1; j < n; j++) {
            if (min > a[j]) {
                min = a[j];
                minidx = j;
            }
        }

        temp = a[minidx];
        a[minidx] = a[i];
        a[i] = temp;
    }

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}