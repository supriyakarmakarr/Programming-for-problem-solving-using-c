/*An astronaut has an oxygen tank with P pressure. If pressure is above 100, it's Safe, if
between 50 and 100, it's Warning, below 50, it's Critical. However, if the temperature
T is above 200°c, any pressure above 80 is instantly Danger. Your Task is to take input
P and T, then print the safety status.*/


#include <stdio.h>

int main() {
    float P, T;

    printf("Enter pressure P: ");
    scanf("%f", &P);

    printf("Enter temperature T: ");
    scanf("%f", &T);

    if (T > 200 && P > 80)
        printf("Danger");
    else if (P > 100)
        printf("Safe");
    else if (P >= 50)
        printf("Warning");
    else
        printf("Critical");

    return 0;
}