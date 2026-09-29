/* Write a program to calculate student averages and count students in ten mark
 * groups. */
#include <stdio.h>

int main(void) {
    int m[10][5], groups[10] = {0}, i, j, total;
    double avg;
    for (i = 0; i < 10; i++) {
        printf("Enter 5 subject marks for student %d: ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);
    }
    /* Find each average and place it into the matching mark interval. */
    for (i = 0; i < 10; i++) {
        total = 0;
        for (j = 0; j < 5; j++)
            total += m[i][j];
        avg = total / 5.0;
        printf("Student %d average = %.2f\n", i + 1, avg);
        if (avg >= 0 && avg <= 10)
            groups[0]++;
        else if (avg > 10 && avg <= 20)
            groups[1]++;
        else if (avg > 20 && avg <= 30)
            groups[2]++;
        else if (avg > 30 && avg <= 40)
            groups[3]++;
        else if (avg > 40 && avg <= 50)
            groups[4]++;
        else if (avg > 50 && avg <= 60)
            groups[5]++;
        else if (avg > 60 && avg <= 70)
            groups[6]++;
        else if (avg > 70 && avg <= 80)
            groups[7]++;
        else if (avg > 80 && avg <= 90)
            groups[8]++;
        else if (avg > 90 && avg <= 100)
            groups[9]++;
    }
    printf("Average mark groups:\n");
    printf("0-10: %d student(s)\n", groups[0]);
    for (i = 1; i < 10; i++)
        printf("%d-%d: %d student(s)\n", i * 10 + 1, i * 10 + 10, groups[i]);
    return 0;
}
