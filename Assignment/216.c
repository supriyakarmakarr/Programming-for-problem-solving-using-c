/* Write a program to split an array into two contiguous equal-sum subarrays. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, cut = -1;
    long long total = 0, left = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    /* This solution looks for one split into two contiguous parts with equal sums. */
    for (i = 0; i < n - 1; i++) {
        left += a[i];
        if (left == total - left) {
            cut = i;
            break;
        }
    }
    if (cut < 0)
        printf("Cannot split into two contiguous equal-sum subarrays.\n");
    else {
        printf("First subarray: ");
        for (i = 0; i <= cut; i++)
            printf("%d ", a[i]);
        printf("\nSecond subarray: ");
        for (i = cut + 1; i < n; i++)
            printf("%d ", a[i]);
    }
    return 0;
}
