/* Write a program to find the longest binary subarray with equal numbers of 0s
 * and 1s. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j, sum, best = 0;
    printf("Enter size of binary array: ");
    scanf("%d", &n);
    printf("Enter %d values (0 or 1): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Treat 0 as -1; a zero total then means equal numbers of 0s and 1s. */
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = i; j < n; j++) {
            sum += a[j] ? 1 : -1;
            if (sum == 0 && j - i + 1 > best)
                best = j - i + 1;
        }
    }
    printf("Maximum length with equal numbers of 0s and 1s: %d\n", best);
    return 0;
}
