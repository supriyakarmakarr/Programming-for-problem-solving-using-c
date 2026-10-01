/* Sort each matrix row in ascending order. */
#include <stdio.h>
int main(void)
{
    int a[10][10], r, c, i, j, k, t;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    /* Insertion sort is applied independently to each row. */
    for (i = 0; i < r; i++)
        for (j = 1; j < c; j++)
        {
            t = a[i][j];
            k = j - 1;
            while (k >= 0 && a[i][k] > t)
            {
                a[i][k + 1] = a[i][k];
                k--;
            }
            a[i][k + 1] = t;
        }
    printf("Rows sorted ascending:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
