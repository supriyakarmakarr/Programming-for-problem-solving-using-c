/* Write a program to display all subarrays whose sum is greater than a given
 * value. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, j;
    long long target, sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value: ");
    scanf("%lld", &target);
    printf("Subarrays with sum greater than %lld:\n", target);
    /* Try every start position and extend the subarray one element at a time. */
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = i; j < n; j++) {
            sum += a[j];
            if (sum > target) {
                int k;
                printf("[");
                for (k = i; k <= j; k++)
                    printf("%d%s", a[k], k < j ? ", " : "");
                printf("] (sum=%lld)\n", sum);
            }
        }
    }
    return 0;
}
