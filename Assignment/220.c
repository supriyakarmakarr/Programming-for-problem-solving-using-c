/* Write a program to find the longest subarray whose sum is divisible by k. */
#include <stdio.h>

int main(void) {
    int a[100], n, k, i, j, best = 0;
    long long sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter positive k: ");
    scanf("%d", &k);
    if (k <= 0) {
        printf("k must be positive.\n");
        return 0;
    }
    /* Check every subarray and keep the longest divisible one. */
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = i; j < n; j++) {
            sum += a[j];
            if (sum % k == 0 && j - i + 1 > best)
                best = j - i + 1;
        }
    }
    printf("Maximum length with sum divisible by %d: %d\n", k, best);
    return 0;
}
