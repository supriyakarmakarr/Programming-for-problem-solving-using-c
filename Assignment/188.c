/*Write a program that takes marks obtained by student, assuming that the index of the
array specifies the roll of the student and the value of an element denotes marks obtained
by the student. Now find the total number ofstudents who have secured 80 or more marks.*/


#include <stdio.h>

int main()
{
    int marks[100], n, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of students: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 80)
            count++;
    }

    printf("Total number of students who secured 80 or more marks = %d", count);

    return 0;
}