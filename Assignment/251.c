/* Convert a square matrix into a tridiagonal matrix. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a[10][10], n, i, j;
    printf("Enter the order of square matrix (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    /* Clear entries outside the main diagonal and its neighbors. */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (abs(i - j) > 1)
                a[i][j] = 0;
    printf("Tridiagonal matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
