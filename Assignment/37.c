/*Write a program to calculate the free number of cupsthe user gets for a specified number
of cups bought by the user. In this particular case, the user gets 1 cup free for every 6 cups
bought. (Example: If the user buys 12 cups, he gets 2 cups free as per the Buy 6 Get 1 Free
offer, and hence the output will be 12+2 = 14 cups).*/


#include <stdio.h>

int main() {
    int cups, free_cups, total;

    printf("Enter number of cups bought: ");
    scanf("%d", &cups);

    free_cups = cups / 6;
    total = cups + free_cups;

    printf("Total cups = %d", total);

    return 0;
}