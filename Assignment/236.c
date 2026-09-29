/* Write a program to copy perfect squares from a 5x5 array into a 1D array. */
#include <math.h>
#include <stdio.h>

int main(void) {
    int a[5][5], sq[25], i, j, n = 0;
    printf("Enter 25 integers:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    /* A nonnegative integer is a square when its integer square root squares back to it.
     */
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (a[i][j] >= 0) {
                int r = (int)sqrt((double)a[i][j]);
                if (r * r == a[i][j])
                    sq[n++] = a[i][j];
            }
    printf("Perfect squares: ");
    for (i = 0; i < n; i++)
        printf("%d ", sq[i]);
    if (!n)
        printf("None");
    return 0;
}
