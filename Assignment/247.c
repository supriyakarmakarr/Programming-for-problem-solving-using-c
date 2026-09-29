/* Write a program to fill a square matrix with 0 on the diagonal, 1 above and
 * -1 below. */
#include <stdio.h>

int main(void) {
    int a[50][50], n, i, j;
    printf("Enter square matrix size: ");
    scanf("%d", &n);
    if (n < 1 || n > 50) {
        printf("Invalid size.\n");
        return 0;
    }
    /* Row and column indices show whether a cell is above, on, or below the diagonal. */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = (i == j) ? 0 : (i < j ? 1 : -1);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
