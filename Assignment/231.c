/* Write a program to add two 1D arrays element by element. */
#include <stdio.h>

int main(void) {
    int a[100], b[100], n, m, i;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array (must be %d): ", n);
    scanf("%d", &m);
    if (m != n) {
        printf("Arrays must have equal sizes.\n");
        return 0;
    }
    printf("Enter elements: ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    printf("Element-wise sum: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i] + b[i]);
    return 0;
}
