/* Question:
   Write a program to convert temperature from Fahrenheit to Celsius.
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display result
    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}