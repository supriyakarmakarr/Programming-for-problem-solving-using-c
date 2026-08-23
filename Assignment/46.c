/*An exam system gives grace marks if a student fails by 5 marks or less. write a program
to accept marks obtained (out of 100) and decide whether the student passes normally,
passes by grace, or fails.*/


#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks obtained: ");
    scanf("%d", &marks);

    if (marks >= 40)
        printf("Pass Normally");
    else if (marks >= 35)
        printf("Pass by Grace");
    else
        printf("Fail");

    return 0;
}