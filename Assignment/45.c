/*A university gives scholarship based on average marks and family income. Scholarship
is given if average marks >= 75 and family income <= Rs. 2,00,000. Write a program to
check whether a student gets scholarship or not.*/


#include <stdio.h>

int main() {
    float marks, income;

    printf("Enter average marks: ");
    scanf("%f", &marks);

    printf("Enter family income: ");
    scanf("%f", &income);

    if (marks >= 75 && income <= 200000)
        printf("Scholarship Granted");
    else
        printf("Scholarship Not Granted");

    return 0;
}