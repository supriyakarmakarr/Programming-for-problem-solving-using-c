/* Write a program to convert a square matrix to a lower triangular matrix. */
#include <stdio.h>

int main(void) {
    int a[50][50], n, i, j;
    printf("Enter square matrix size: ");
    scanf("%d", &n);
    if (n < 1 || n > 50) {
        printf("Invalid size.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    /* Set all cells above the main diagonal to zero. */
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            a[i][j] = 0;
    printf("Lower triangular matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
