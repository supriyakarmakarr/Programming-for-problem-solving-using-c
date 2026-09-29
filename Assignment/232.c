/* Write a program to create and display a 3x3 array containing numbers 1 to 9.
 */
#include <stdio.h>

int main(void) {
    int a[3][3], i, j, x = 1;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = x++;
    printf("3x3 array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
