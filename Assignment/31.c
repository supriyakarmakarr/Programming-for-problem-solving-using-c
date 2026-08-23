// Write a program to calculate the gross salary of an employee by accepting basic salary.
// (HRA = 20%, DA = 10%)


#include <stdio.h>

int main(){
    float basic,hra,da,gross;

    printf("Enter your basic: ");
    scanf("%f",&basic);

    hra = basic*20/100;
    da = basic*10/100;
    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);
    
    return 0;
}