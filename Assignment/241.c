/* Write a program to display each student’s five subject marks and total. */
#include <stdio.h>

int main(void) {
    int marks[10][5], i, j, total;
    for (i = 0; i < 10; i++) {
        printf("Enter 5 subject marks for student %d: ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &marks[i][j]);
    }
    for (i = 0; i < 10; i++) {
        total = 0;
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", marks[i][j]);
            total += marks[i][j];
        }
        printf("| Total = %d\n", total);
    }
    return 0;
}
