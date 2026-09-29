/* Write a program to copy all elements from one array to another. */
#include <stdio.h>

int main(void) {
    int a[100], b[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        b[i] = a[i];
    printf("Copied array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}
