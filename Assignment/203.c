/* Write a program to merge two sorted arrays and display the merged array in
 * reversed order. */
#include <stdio.h>

int main(void)
{
    int a[100], b[100], c[200], n1, n2, i, j, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    /* Take the smaller next value from the two sorted arrays. */
    i = j = 0;
    while (i < n1 && j < n2)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n1)
        c[k++] = a[i++];
    while (j < n2)
        c[k++] = b[j++];
        
    /* The merged values are ascending, so print them from the end to reverse them. */
    printf("Merged array in reversed order: ");
    for (i = k - 1; i >= 0; i--)
        printf("%d ", c[i]);
    return 0;
}
