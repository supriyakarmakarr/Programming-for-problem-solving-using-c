/* Question:
   Write a program to accept marks of five subjects and
   calculate the total marks and percentage using array and loop.
*/

#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;

    // Input marks of 5 subjects
    for(i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Calculate total marks
    for(i = 0; i < 5; i++) {
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Display results
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}