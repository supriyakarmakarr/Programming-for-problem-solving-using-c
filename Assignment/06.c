/* Question:
   Write a program to accept the radius of a circle and calculate its area.
*/

#include <stdio.h>

int main() {
    float radius, area;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = 3.14159 * radius * radius;

    // Display result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}