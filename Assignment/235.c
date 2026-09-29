/* Write a program to find the sum of each row and column of a 3x3 array. */
#include <stdio.h>

int main(void) {
    int a[3][3], i, j, s;
    printf("Enter 9 integers:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++) {
        s = 0;
        for (j = 0; j < 3; j++)
            s += a[i][j];
        printf("Sum of row %d = %d\n", i + 1, s);
    }
    for (j = 0; j < 3; j++) {
        s = 0;
        for (i = 0; i < 3; i++)
            s += a[i][j];
        printf("Sum of column %d = %d\n", j + 1, s);
    }
    return 0;
}
