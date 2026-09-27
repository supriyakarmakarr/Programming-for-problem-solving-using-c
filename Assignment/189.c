/*Write a program that takes marks obtained by student, assuming that the index of the
array specifies the roll of the student and the value of an element denotes marks obtained
by the student. Now print the roll numbers and marks of the student who have got less
than 50.*/



#include <stdio.h>

int main()
{
    int marks[100], n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of students: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("\nStudents who scored less than 50:\n");

    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 50)
            printf("Roll No: %d, Marks: %d\n", i, marks[i]);
    }

    return 0;
}