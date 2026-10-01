/* Find the row with the greatest sum in a matrix. */
#include <stdio.h>
int main(void)
{
    int a[10][10], r, c, i, j, maxRow = 0;
    long long sum, maxSum = 0;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        if (i == 0 || sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    printf("Row %d has the maximum sum: %lld\n", maxRow + 1, maxSum);
    return 0;
}
