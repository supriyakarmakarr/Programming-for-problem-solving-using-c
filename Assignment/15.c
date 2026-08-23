/* Question:
   Write a program to swap two numbers without using
   a third variable.
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}