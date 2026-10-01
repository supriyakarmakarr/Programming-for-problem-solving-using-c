/* Search a key in a square matrix and show all matching positions. */
#include <stdio.h>
int main(void)
{
    int a[10][10], n, i, j, key, found = 0;
    printf("Enter square matrix order (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
    {
        printf("Invalid order.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    printf("Enter value K to search: ");
    if (scanf("%d", &key) != 1)
        return 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == key)
            {
                printf("Found at row %d, column %d (1-based).\n", i + 1, j + 1);
                found = 1;
            }
    if (!found)
        printf("Value not found.\n");
    return 0;
}
