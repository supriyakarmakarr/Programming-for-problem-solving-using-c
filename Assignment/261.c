/* Calculate main and secondary diagonal sums for a square matrix. */
#include <stdio.h>
int main(void)
{
    int a[10][10], n, i, j;
    long long mainSum = 0, secondarySum = 0;
    printf("Enter square matrix order (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    for (i = 0; i < n; i++)
    {
        mainSum += a[i][i];
        secondarySum += a[i][n - 1 - i];
    }
    printf("Main diagonal sum = %lld\nSecondary diagonal sum = %lld\n", mainSum, secondarySum);
    printf("Sum of both diagonals (center counted once) = %lld\n", mainSum + secondarySum - (n % 2 ? a[n / 2][n / 2] : 0));
    return 0;
}
