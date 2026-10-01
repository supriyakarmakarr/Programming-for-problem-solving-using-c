/* Check standard magic-square conditions for values 1 through n squared. */
#include <stdio.h>
int main(void)
{
    int a[10][10], seen[101] = {0}, n, i, j, valid = 1;
    long long target, mainSum = 0, otherSum = 0, sum;
    printf("Enter square matrix order (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter matrix values:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    target = (long long)n * (n * n + 1) / 2;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < 1 || a[i][j] > n * n || seen[a[i][j]])
                valid = 0;
            else
                seen[a[i][j]] = 1;
        }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
            sum += a[i][j];
        if (sum != target)
            valid = 0;
        sum = 0;
        for (j = 0; j < n; j++)
            sum += a[j][i];
        if (sum != target)
            valid = 0;
        mainSum += a[i][i];
        otherSum += a[i][n - 1 - i];
    }
    if (mainSum != target || otherSum != target)
        valid = 0;
    printf("%s\n", valid ? "It is a magic square." : "It is not a magic square.");
    return 0;
}
