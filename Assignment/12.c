/* Question:
   Write a program to accept three numbers and determine
   which number is greater (Without using if-else).
*/

#include <stdio.h>

int main() {
    int a, b, c, greatest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Find greatest number using ternary operator
    greatest = (a > b) ? ((a > c) ? a : c)
                       : ((b > c) ? b : c);

    // Display result
    printf("Greatest number = %d\n", greatest);

    return 0;
}