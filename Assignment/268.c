/* Count 4-directionally connected groups of 1s using iterative flood fill. */
#include <stdio.h>
int main(void)
{
    int a[20][20], seen[20][20] = {0}, qr[400], qc[400], r, c, i, j, head, tail, nr, nc, island = 0, d, dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};
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
            if (a[i][j] && !seen[i][j])
            {
                island++;
                head = tail = 0;
                qr[tail] = i;
                qc[tail++] = j;
                seen[i][j] = 1;
                while (head < tail)
                {
                    int x = qr[head], y = qc[head++];
                    for (d = 0; d < 4; d++)
                    {
                        nr = x + dr[d];
                        nc = y + dc[d];
                        if (nr >= 0 && nr < r && nc >= 0 && nc < c && a[nr][nc] && !seen[nr][nc])
                        {
                            seen[nr][nc] = 1;
                            qr[tail] = nr;
                            qc[tail++] = nc;
                        }
                    }
                }
            }
    printf("Number of islands = %d\n", island);
    return 0;
}
