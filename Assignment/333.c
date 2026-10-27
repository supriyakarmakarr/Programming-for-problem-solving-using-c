/*
 * 333. Write a program to find the longest common prefix of multiple strings.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char w[100][100];
    printf("Enter number of strings: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    printf("Enter %d strings: ", n);
    for (int i = 0; i < n; i++)
        if (scanf("%99s", w[i]) != 1) return 1;
    size_t len = strlen(w[0]);
    for (int i = 1; i < n; i++) {
        size_t k = 0;
        while (k < len && w[i][k] == w[0][k]) k++;
        len = k;
    }
    printf("Longest common prefix: \"%.*s\"\n", (int)len, w[0]);
    return 0;
}
