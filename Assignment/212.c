/* Write a program to check whether two arrays are equal in the same order. */
#include <stdio.h>

int main(void) {
    int a[100], b[100], n, m, i, equal = 1;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    if (n != m)
        equal = 0;
    else
        for (i = 0; i < n; i++)
            if (a[i] != b[i])
                equal = 0;
    printf("Arrays are %sequal in the same order.\n", equal ? "" : "not ");
    return 0;
}
