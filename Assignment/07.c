/* Question:
   Write a program to accept the length and breadth of a rectangle
   and calculate its area.
*/

#include <stdio.h>

int main() {
    float length, breadth, area;

    // Input length and breadth from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area
    area = length * breadth;

    // Display result
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}