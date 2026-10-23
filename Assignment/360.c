#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char a[MAX_LENGTH], b[MAX_LENGTH];
    size_t d[MAX_LENGTH][MAX_LENGTH];
    printf("First string: ");
    if (!fgets(a, sizeof a, stdin))
        return 1;
    a[strcspn(a, "\n")] = 0;
    printf("Second string: ");
    if (!fgets(b, sizeof b, stdin))
        return 1;
    b[strcspn(b, "\n")] = 0;
    size_t n = strlen(a), m = strlen(b);
    for (size_t i = 0; i <= n; i++)
        d[i][0] = i;
    for (size_t j = 0; j <= m; j++)
        d[0][j] = j;
    for (size_t i = 1; i <= n; i++)
        for (size_t j = 1; j <= m; j++) {
            size_t c = a[i - 1] == b[j - 1] ? 0 : 1, x = d[i - 1][j] + 1, y = d[i][j - 1] + 1,
                   z = d[i - 1][j - 1] + c;
            d[i][j] = x < y ? x : y;
            if (z < d[i][j])
                d[i][j] = z;
        }
    printf("Edit distance: %zu\n", d[n][m]);
    return 0;
}
