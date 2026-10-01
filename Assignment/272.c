/* Find the maximum-sum path when moves are limited to right and down. */
#include <stdio.h>
int main(void)
{
    int a[20][20], r, c, i, j;
    long long dp[20][20];
    printf("Enter rows and columns (1-20 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
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
        for (j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = a[i][j];
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] + a[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]) + a[i][j];
        }
    printf("Maximum path sum = %lld\n", dp[r - 1][c - 1]);
    return 0;
}
