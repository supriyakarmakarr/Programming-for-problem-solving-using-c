/*Write a program to merge two sorted arrays and print the final array in sorted order.
The final array must not have any duplicate elements.*/


#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first sorted array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second sorted array: ");
    for (j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            if (k == 0 || c[k - 1] != a[i])
                c[k++] = a[i];
            i++;
        }
        else if (b[j] < a[i])
        {
            if (k == 0 || c[k - 1] != b[j])
                c[k++] = b[j];
            j++;
        }
        else
        {
            if (k == 0 || c[k - 1] != a[i])
                c[k++] = a[i];
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        if (k == 0 || c[k - 1] != a[i])
            c[k++] = a[i];
        i++;
    }

    while (j < n2)
    {
        if (k == 0 || c[k - 1] != b[j])
            c[k++] = b[j];
        j++;
    }

    printf("Final array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}