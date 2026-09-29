/* Write a program to find the maximum sum with no two chosen elements adjacent.
 */
#include <stdio.h>

int main(void) {
    int a[100], n, i;
    long long incl, excl, newExcl;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Keep the best sum including the current value and excluding it. */
    incl = 0;
    excl = 0;
    for (i = 0; i < n; i++) {
        newExcl = incl > excl ? incl : excl;
        incl = excl + a[i];
        excl = newExcl;
    }
    printf("Maximum sum with no adjacent elements: %lld\n", incl > excl ? incl : excl);
    return 0;
}
