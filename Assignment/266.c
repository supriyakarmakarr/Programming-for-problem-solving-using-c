/* Print matrix elements in clockwise spiral order. */
#include <stdio.h>
int main(void)
{
    int a[10][10], r, c, i, j, top = 0, bottom, left = 0, right;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    bottom = r - 1;
    right = c - 1;
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
    printf("Spiral order: ");
    while (top <= bottom && left <= right)
    {
        for (j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;
        for (i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;
        if (top <= bottom)
        {
            for (j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
    printf("\n");
    return 0;
}
