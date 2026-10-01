/* Print both 90-degree rotations of a rectangular matrix. */
#include <stdio.h>
int main(void)
{
    int a[10][10], r, c, i, j;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    printf("90 degrees clockwise:\n");
    for (j = 0; j < c; j++)
    {
        for (i = r - 1; i >= 0; i--)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("90 degrees anticlockwise:\n");
    for (j = c - 1; j >= 0; j--)
    {
        for (i = 0; i < r; i++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
