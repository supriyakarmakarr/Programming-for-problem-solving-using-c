/* Write a program to find pairs whose sum equals a given value. */
#include <stdio.h>

int main(void) {
    int a[100], n, target, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Try every pair of different positions in the array. */
    printf("Enter target sum: ");
    printf("Enter target sum: ");
    scanf("%d", &target);
    printf("Pairs: ");
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] + a[j] == target) {
                printf("(%d, %d) ", a[i], a[j]);
                found = 1;
            }
    if (!found)
        printf("None");
    return 0;
}
