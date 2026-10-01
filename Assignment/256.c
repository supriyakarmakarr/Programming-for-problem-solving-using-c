/* Multiply every matrix element by a scalar. */
#include <stdio.h>
int main(void)
{
    int a[10][10], rows, cols, i, j;
    double scalar;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    printf("Enter scalar: ");
    if (scanf("%lf", &scalar) != 1)
        return 0;
    printf("Scaled matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%.2f\t", a[i][j] * scalar);
        printf("\n");
    }
    return 0;
}
