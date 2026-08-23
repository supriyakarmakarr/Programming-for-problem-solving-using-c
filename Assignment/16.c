/* Question:
   Write a program to accept two numbers and check whether
   they are equal or not (Without using if-else).
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Check using ternary operator
    printf("%s\n", (a == b) ? "Numbers are equal"
                            : "Numbers are not equal");

    return 0;
}

/*
if(a == b)
        printf("Numbers are equal.");
  else
        printf("Numbers are not equal.");
*/