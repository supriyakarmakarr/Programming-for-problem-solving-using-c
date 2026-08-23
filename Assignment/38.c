/*Write a program to accept marks and display the grade according to the following
conditions:
Marks ≥ 90 → Grade A
Marks ≥ 75 → Grade B
Marks ≥ 60 → Grade C
Marks ≥ 40 → Grade D
Marks < 40 → Fail*/


#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 60)
        printf("Grade C");
    else if (marks >= 40)
        printf("Grade D");
    else
        printf("Fail");

    return 0;
}