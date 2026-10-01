/* Stable-partition columns by parity, alternating by zero-based column index. */
#include <stdio.h>
int main(void)
{
    int a[10][10], temp[10], n, i, j, k;
    printf("Enter square matrix order (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    /* Keep the original order within each parity group. */
    for (j = 0; j < n; j++)
    {
        k = 0;
        for (i = 0; i < n; i++)
            if (((a[i][j] % 2 == 0) == (j % 2 == 0)))
                temp[k++] = a[i][j];
        for (i = 0; i < n; i++)
            if (((a[i][j] % 2 == 0) != (j % 2 == 0)))
                temp[k++] = a[i][j];
        for (i = 0; i < n; i++)
            a[i][j] = temp[i];
    }
    printf("Rearranged matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
