/* Write a program to multiply a 3x3 matrix by a 3x2 matrix. */
#include <stdio.h>

int main(void) {
    int a[3][3], b[3][2], c[3][2], i, j, k;
    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    /* Multiply each row of the first matrix by each column of the second. */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    printf("Product (3x2) matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
