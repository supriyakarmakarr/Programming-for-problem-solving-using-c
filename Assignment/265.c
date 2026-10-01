/* Display a sparse matrix in three-column (row, column, value) form. */
#include <stdio.h>
int main(void)
{
    int a[10][10], r, c, i, j, count = 0;
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
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] != 0)
                count++;
    printf("Sparse representation (row column value; positions are 1-based):\n%d %d %d\n", r, c, count);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] != 0)
                printf("%d %d %d\n", i + 1, j + 1, a[i][j]);
    return 0;
}
