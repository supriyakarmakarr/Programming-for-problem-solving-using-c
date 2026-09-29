/* Write a program to find the farthest pair among 10 points. */
#include <math.h>
#include <stdio.h>

int main(void) {
    double x[10], y[10], max = 0, d;
    int i, j, p = 0, q = 0;
    printf("Enter x and y coordinates for 10 points:\n");
    for (i = 0; i < 10; i++)
        scanf("%lf%lf", &x[i], &y[i]);
    /* Compare every pair of points and keep the greatest Euclidean distance. */
    for (i = 0; i < 10; i++)
        for (j = i + 1; j < 10; j++) {
            d = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (d > max) {
                max = d;
                p = i;
                q = j;
            }
        }
    printf("Farthest points: %d and %d\nDistance: %.2f\n", p + 1, q + 1, max);
    return 0;
}
