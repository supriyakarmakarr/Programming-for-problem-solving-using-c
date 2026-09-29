/* Write a program to find the smallest subarray whose sum is greater than a
 * given value. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j, bestStart = -1, bestLen = 100000;
    long long target, sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value: ");
    scanf("%lld", &target);
    /* Check every subarray and remember the shortest one that meets the condition. */
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = i; j < n; j++) {
            sum += a[j];
            if (sum > target && j - i + 1 < bestLen) {
                bestStart = i;
                bestLen = j - i + 1;
            }
        }
    }
    if (bestStart < 0)
        printf("No subarray has sum greater than %lld.\n", target);
    else {
        printf("Smallest subarray: ");
        for (i = bestStart; i < bestStart + bestLen; i++)
            printf("%d ", a[i]);
        printf("\nLength: %d\n", bestLen);
    }
    return 0;
}
