
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[256], b[256];
    int d[256][256], n, m;

    printf("First string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Second string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    n = strlen(a);
    m = strlen(b);

    for (int i = 0; i <= n; i++) d[i][0] = i;
    for (int j = 0; j <= m; j++) d[0][j] = j;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int c = a[i-1] != b[j-1];
            int x = d[i-1][j] + 1;
            int y = d[i][j-1] + 1;
            int z = d[i-1][j-1] + c;
            d[i][j] = x < y ? x : y;
            if (z < d[i][j]) d[i][j] = z;
        }

    printf("Edit distance: %d\n", d[n][m]);
    return 0;
}
