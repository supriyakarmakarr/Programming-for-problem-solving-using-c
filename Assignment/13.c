/* Question:
   Write a program to accept a number and check whether
   it is positive, negative, or zero (Without using if-else).
*/

#include <stdio.h>

int main() {
    int n;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check using ternary operator
    printf("%s\n", (n > 0) ? "Positive"
                           : (n < 0) ? "Negative"
                                     : "Zero");

    return 0;
}