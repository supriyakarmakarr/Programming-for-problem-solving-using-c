/*An ATM allows withdrawal only if:
Withdrawal amount is a multiple of 100, and
Account balance after withdrawal remains >= Rs. 500
Write a program to accept balance and withdrawal amount and decide whether the
transaction is successfulor failed.*/


#include <stdio.h>

int main() {
    int balance, withdrawal;

    printf("Enter account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (withdrawal % 100 == 0 && balance - withdrawal >= 500)
        printf("Transaction Successful");
    else
        printf("Transaction Failed");

    return 0;
}