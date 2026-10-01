/* Find the maximum-sum rectangular submatrix using row-pair Kadane scans. */
#include <stdio.h>
int main(void)
{
    int a[20][20], r, c, i, j, top, left, bottom, right;
    long long sums[20], cur, best;
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
    best = a[0][0];
    top = left = bottom = right = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            sums[j] = 0;
        for (int end = i; end < r; end++)
        {
            for (j = 0; j < c; j++)
                sums[j] += a[end][j];
            cur = sums[0];
            long long local = cur;
            int start = 0, localLeft = 0, localRight = 0;
            for (j = 1; j < c; j++)
            {
                if (cur < 0)
                {
                    cur = sums[j];
                    start = j;
                }
                else
                    cur += sums[j];
                if (cur > local)
                {
                    local = cur;
                    localLeft = start;
                    localRight = j;
                }
            }
            if (local > best)
            {
                best = local;
                top = i;
                bottom = end;
                left = localLeft;
                right = localRight;
            }
        }
    }
    printf("Maximum submatrix sum = %lld\n", best);
    printf("Rows %d-%d, columns %d-%d (1-based):\n", top + 1, bottom + 1, left + 1, right + 1);
    for (i = top; i <= bottom; i++)
    {
        for (j = left; j <= right; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
