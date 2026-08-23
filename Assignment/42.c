/*A weather app shows alerts based on rainfall. write a program to accept rainfall in mm
and display No Rain (0 mm), Light Rain (1–10 mm), or Heavy Rain (> 10 mm).*/


#include <stdio.h>

int main() {
    float rainfall;

    printf("Enter rainfall in mm: ");
    scanf("%f", &rainfall);

    if (rainfall == 0)
        printf("No Rain");
    else if (rainfall >= 1 && rainfall <= 10)
        printf("Light Rain");
    else if (rainfall > 10)
        printf("Heavy Rain");
    else
        printf("Invalid rainfall");

    return 0;
}