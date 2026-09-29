/* Write a program to find the roll number with the highest mark in each
 * subject. */
#include <stdio.h>

int main(void) {
    int m[10][5], i, j, best;
    for (i = 0; i < 10; i++) {
        printf("Enter 5 subject marks for student %d: ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);
    }
    for (j = 0; j < 5; j++) {
        best = 0;
        for (i = 1; i < 10; i++)
            if (m[i][j] > m[best][j])
                best = i;
        printf("Subject %d highest mark: student roll %d (%d marks)\n", j + 1, best + 1,
               m[best][j]);
    }
    return 0;
}
