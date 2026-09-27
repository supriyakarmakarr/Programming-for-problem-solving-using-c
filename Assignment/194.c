/*Write a program that takes marks obtained by student between 0-100, assuming that the
index of the array specifies the roll of the student and the value of an element denotes
marks obtained by the student. Now make 10 groups: 0-10, 11-20, 21-30 etc. count the
number of values that falls in each group and display the result.*/





#include <stdio.h>

int main()
{
    int marks[100], n, count[10] = {0};

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks (0-100): ");

    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 0 && marks[i] <= 100)
        {
            if (marks[i] == 100)
                count[9]++;
            else
                count[marks[i] / 10]++;
        }
    }

    printf("\nMarks Group\tNumber of Students\n");

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
            printf("0-10\t\t%d\n", count[i]);
        else
            printf("%d-%d\t\t%d\n", i * 10 + 1, (i + 1) * 10, count[i]);
    }

    return 0;
}