/* Question:
   Write a program to accept two numbers and determine
   which number is greater (Without using if-else).
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Find greater number using ternary operator
    printf("Greater number = %d\n", (a > b) ? a : b);
    // tarnary oparator

    return 0;
}