/* Write a program to remove duplicate elements from an array. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Compare each value with the values after it and remove repeated copies. */
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
            } else
                j++;
        }
    }
    printf("Array without duplicates: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
