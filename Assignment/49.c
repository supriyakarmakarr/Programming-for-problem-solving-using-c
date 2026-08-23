/*A trekker is crossing a desert. He has a canteen with a specific capacity in liters. He
drinks 250ml of water every 1 kilometer. Your task is to take input of canteen capacity
in liters and the total distance of the trek in kilometers and print yes if he has enough
water to finish the trek. If not, print how many additional liters he needs to carry.*/


#include <stdio.h>

int main() {
    float capacity, distance, required, additional;

    printf("Enter canteen capacity (liters): ");
    scanf("%f", &capacity);

    printf("Enter trek distance (km): ");
    scanf("%f", &distance);

    required = distance * 0.25;

    if (capacity >= required) {
        printf("Yes");
    } else {
        additional = required - capacity;
        printf("No\n");
        printf("Additional water needed = %.2f liters", additional);
    }

    return 0;
}