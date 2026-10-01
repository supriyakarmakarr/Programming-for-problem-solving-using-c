/* Replace every value that occurs more than once with zero. */
#include <stdio.h>
int main(void)
{
    int a[10][10], n, i, j, x, y, count;
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
    /* Count each value in the original matrix before changing any cells. */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            count = 0;
            for (x = 0; x < n; x++)
                for (y = 0; y < n; y++)
                    if (a[x][y] == a[i][j])
                        count++;
            if (count > 1)
                a[i][j] = 0;
        }
    printf("Matrix after replacing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
