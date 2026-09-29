/* Write a program to count zero elements in a matrix. */
#include <stdio.h>

int main(void) {
    int r, c, i, j, count = 0;
    printf("Enter matrix rows and columns: ");
    scanf("%d%d", &r, &c);
    if (r > 50 || c > 50 || r < 1 || c < 1) {
        printf("Invalid dimensions.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            if (x == 0)
                count++;
        }
    printf("Number of zero elements: %d\n", count);
    return 0;
}
