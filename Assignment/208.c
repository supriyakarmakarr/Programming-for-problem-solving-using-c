/* Write a program to print the missing numbers from n inputs in the range 1 to
 * n. */
#include <stdio.h>

int main(void) {
    int a[100], present[101] = {0}, n, i, x, missing = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    /* Mark every number that appears; unmarked numbers are missing. */
    printf("Enter %d numbers in the range
    printf("Enter %d numbers in the range 1 to %d: ", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 1 && a[i] <= n)
            present[a[i]] = 1;
    }
    printf("Missing numbers: ");
    for (x = 1; x <= n; x++)
        if (!present[x]) {
        printf("%d ", x);
        missing = 1;
        }
    if (!missing)
        printf("None");
    return 0;
}
