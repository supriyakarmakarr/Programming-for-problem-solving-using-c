/* Find the fewest 4-directional moves through free cells using BFS. */
#include <stdio.h>
int main(void)
{
    int a[20][20], dist[20][20], qr[400], qc[400], r, c, i, j, head = 0, tail = 0, d, nr, nc, dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};
    printf("Enter rows and columns (1-20 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter binary grid (1=obstacle, 0=free):\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1 || (a[i][j] != 0 && a[i][j] != 1))
            {
                printf("Invalid grid value.\n");
                return 0;
            }
    if (a[0][0] || a[r - 1][c - 1])
    {
        printf("No path exists.\n");
        return 0;
    }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            dist[i][j] = -1;
    dist[0][0] = 0;
    qr[tail] = 0;
    qc[tail++] = 0;
    while (head < tail)
    {
        int x = qr[head], y = qc[head++];
        for (d = 0; d < 4; d++)
        {
            nr = x + dr[d];
            nc = y + dc[d];
            if (nr >= 0 && nr < r && nc >= 0 && nc < c && !a[nr][nc] && dist[nr][nc] < 0)
            {
                dist[nr][nc] = dist[x][y] + 1;
                qr[tail] = nr;
                qc[tail++] = nc;
            }
        }
    }
    if (dist[r - 1][c - 1] < 0)
        printf("No path exists.\n");
    else
        printf("Shortest path length = %d moves\n", dist[r - 1][c - 1]);
    return 0;
}
