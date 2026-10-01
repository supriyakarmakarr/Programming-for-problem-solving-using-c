/* Find a square matrix inverse using Gauss-Jordan elimination. */
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a[10][20], factor, t;
    int n, i, j, k, pivot;
    printf("Enter square matrix order (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%lf", &a[i][j]) != 1)
                return 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j + n] = (i == j) ? 1.0 : 0.0;
    /* Pivot rows to avoid division by a zero (or tiny) diagonal entry. */
    for (i = 0; i < n; i++)
    {
        pivot = i;
        for (k = i + 1; k < n; k++)
            if (fabs(a[k][i]) > fabs(a[pivot][i]))
                pivot = k;
        if (fabs(a[pivot][i]) < 1e-10)
        {
            printf("Inverse does not exist (matrix is singular).\n");
            return 0;
        }
        if (pivot != i)
            for (j = 0; j < 2 * n; j++)
            {
                t = a[i][j];
                a[i][j] = a[pivot][j];
                a[pivot][j] = t;
            }
        t = a[i][i];
        for (j = 0; j < 2 * n; j++)
            a[i][j] /= t;
        for (k = 0; k < n; k++)
            if (k != i)
            {
                factor = a[k][i];
                for (j = 0; j < 2 * n; j++)
                    a[k][j] -= factor * a[i][j];
            }
    }
    printf("Inverse matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = n; j < 2 * n; j++)
            printf("%.4f\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
