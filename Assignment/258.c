/* Find a determinant by elimination with partial pivoting. */
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a[10][10], det = 1.0, t, factor;
    int n, i, j, k, pivot, sign = 1;
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
    {
        pivot = i;
        for (k = i + 1; k < n; k++)
            if (fabs(a[k][i]) > fabs(a[pivot][i]))
                pivot = k;
        if (fabs(a[pivot][i]) < 1e-12)
        {
            det = 0;
            break;
        }
        if (pivot != i)
        {
            for (j = 0; j < n; j++)
            {
                t = a[i][j];
                a[i][j] = a[pivot][j];
                a[pivot][j] = t;
            }
            sign = -sign;
        }
        det *= a[i][i];
        for (k = i + 1; k < n; k++)
        {
            factor = a[k][i] / a[i][i];
            for (j = i + 1; j < n; j++)
                a[k][j] -= factor * a[i][j];
        }
    }
    printf("Determinant = %.6g\n", det * sign);
    return 0;
}
