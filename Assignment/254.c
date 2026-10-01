/* Calculate the mean of all elements in a two-dimensional array. */
#include <stdio.h>
int main(void)
{
    int a[10][10], rows, cols, i, j;
    long long sum = 0;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d%d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
                return 0;
            sum += a[i][j];
        }
    printf("Mean = %.2f\n", (double)sum / (rows * cols));
    return 0;
}
