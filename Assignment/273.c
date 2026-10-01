/* Count every square submatrix whose element sum equals K. */
#include <stdio.h>
int main(void)
{
    int a[20][20], r, c, i, j, top, left, bottom, right, size;
    long long pref[21][21] = {{0}}, k, sum, count = 0;
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
    printf("Enter target sum K: ");
    if (scanf("%lld", &k) != 1)
        return 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            pref[i + 1][j + 1] = a[i][j] + pref[i][j + 1] + pref[i + 1][j] - pref[i][j];
    for (size = 1; size <= r && size <= c; size++)
        for (top = 0; top + size <= r; top++)
            for (left = 0; left + size <= c; left++)
            {
                bottom = top + size;
                right = left + size;
                sum = pref[bottom][right] - pref[top][right] - pref[bottom][left] + pref[top][left];
                if (sum == k)
                    count++;
            }
    printf("Number of square submatrices with sum %lld = %lld\n", k, count);
    return 0;
}
