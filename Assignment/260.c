/* Check whether a square matrix is an identity matrix. */
#include <stdio.h>
int main(void)
{
    int a[10][10], n, i, j, identity = 1;
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
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != (i == j ? 1 : 0))
                identity = 0;
    printf("%s\n", identity ? "The matrix is an identity matrix." : "The matrix is not an identity matrix.");
    return 0;
}
