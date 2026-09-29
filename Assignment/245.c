/* Write a program to multiply two 3x3 matrices. */
#include <stdio.h>

int main(void) {
    int a[3][3], b[3][3], c[3][3], i, j, k;
    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    /* Each result cell is a row-by-column dot product. */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    printf("Product matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
