/* Find the side length of the largest all-1 square submatrix. */
#include <stdio.h>
int main(void)
{
    int a[20][20], dp[20][20] = {0}, r, c, i, j, best = 0;
    printf("Enter rows and columns (1-20 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter binary matrix (0 or 1):\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1 || (a[i][j] != 0 && a[i][j] != 1))
            {
                printf("Invalid binary value.\n");
                return 0;
            }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j])
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 1;
                else
                {
                    int m = dp[i - 1][j];
                    if (dp[i][j - 1] < m)
                        m = dp[i][j - 1];
                    if (dp[i - 1][j - 1] < m)
                        m = dp[i - 1][j - 1];
                    dp[i][j] = m + 1;
                }
                if (dp[i][j] > best)
                    best = dp[i][j];
            }
    printf("Largest all-1 square side length = %d\nArea = %d\n", best, best * best);
    return 0;
}
