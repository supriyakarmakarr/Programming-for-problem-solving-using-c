/*A bank approves a loan only if the applicant’s monthly income is at least 3 times the
EMI. write a program to accept monthly income and EMI and decide whether the loan
is approved or rejected.*/


#include <stdio.h>

int main() {
    float income, emi;

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter EMI: ");
    scanf("%f", &emi);

    if (income >= 3 * emi)
        printf("Loan Approved");
    else
        printf("Loan Rejected");

    return 0;
}