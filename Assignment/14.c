/* Question:
   Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}


/*
#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and b is %d", a, b);
    return 0;
}
*/