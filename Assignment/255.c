/* Multiply the entries strictly above the main diagonal. */
#include <stdio.h>
int main(void)
{
    int a[10][10], n, i, j, found = 0;
    long long product = 1;
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
        for (j = i + 1; j < n; j++)
        {
            product *= a[i][j];
            found = 1;
        }
    if (found)
        printf("Product above main diagonal = %lld\n", product);
    else
        printf("No elements lie above the main diagonal; product is 1.\n");
    return 0;
}
