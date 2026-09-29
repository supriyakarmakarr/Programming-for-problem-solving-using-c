/* Write a program to extract the second column of a 3x3 array. */
#include <stdio.h>

int main(void) {
    int a[3][3], i, j;
    printf("Enter 9 integers for the 3x3 array:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Second column: ");
    for (i = 0; i < 3; i++)
        printf("%d ", a[i][1]);
    return 0;
}
