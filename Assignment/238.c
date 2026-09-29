/* Write a program to check whether a 5x5 matrix is symmetric. */
#include <stdio.h>

int main(void) {
    int a[5][5], i, j, sym = 1;
    printf("Enter 25 integers:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    /* A symmetric matrix matches across its main diagonal. */
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (a[i][j] != a[j][i])
                sym = 0;
    printf("Matrix is %ssymmetric.\n", sym ? "" : "not ");
    return 0;
}
