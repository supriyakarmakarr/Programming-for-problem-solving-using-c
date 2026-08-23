#include <stdio.h>

int main() {
    // Declare variables to store two numbers
    float num1, num2;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Display addition
    printf("Addition = %.2f\n", num1 + num2);

    // Display subtraction
    printf("Subtraction = %.2f\n", num1 - num2);

    // Display multiplication
    printf("Multiplication = %.2f\n", num1 * num2);

    // Display division
    if (num2 != 0)
        printf("Division = %.2f\n", num1 / num2);
    else
        printf("Division is not possible (cannot divide by zero).\n");

    return 0;
}