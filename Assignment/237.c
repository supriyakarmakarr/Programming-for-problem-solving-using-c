/* Write a program to find the largest and smallest decimal numbers in a 5x5
 * array. */
#include <stdio.h>

int main(void) {
    double a[5][5], mn, mx;
    int i, j;
    printf("Enter 25 decimal numbers:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", &a[i][j]);
    mn = mx = a[0][0];
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            if (a[i][j] < mn)
                mn = a[i][j];
            if (a[i][j] > mx)
                mx = a[i][j];
        }
    printf("Smallest = %.2f\nLargest = %.2f\n", mn, mx);
    return 0;
}
