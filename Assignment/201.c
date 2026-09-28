/*Write a program to insert a number into an array that is already sorted in ascending order.*/



#include <stdio.h>

int main()
{
    int a[100], n, num, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in ascending order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to insert: ");
    scanf("%d", &num);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (num < a[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}