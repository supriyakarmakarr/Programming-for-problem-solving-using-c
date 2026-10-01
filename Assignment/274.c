/* Find the largest square whose sum is divisible by nonzero k. */
#include <stdio.h>
int main(void)
{
    int a[20][20], r, c, i, j, top, left, size, best = 0;
    long long pref[21][21] = {{0}}, k, sum;
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
    printf("Enter nonzero divisor k: ");
    if (scanf("%lld", &k) != 1 || k == 0)
    {
        printf("k must be nonzero.\n");
        return 0;
    }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            pref[i + 1][j + 1] = a[i][j] + pref[i][j + 1] + pref[i + 1][j] - pref[i][j];
    for (size = 1; size <= r && size <= c; size++)
        for (top = 0; top + size <= r; top++)
            for (left = 0; left + size <= c; left++)
            {
                sum = pref[top + size][left + size] - pref[top][left + size] - pref[top + size][left] + pref[top][left];
                if (sum % k == 0 && size > best)
                    best = size;
            }
    printf("Largest square side length with sum divisible by %lld = %d\n", k, best);
    return 0;
}
