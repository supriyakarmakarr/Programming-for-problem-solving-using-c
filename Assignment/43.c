/*43. A highway toll plaza charges Rs. 60 for cars and Rs.100 for trucks. At the end of the
day, the manager notes the number of cars and trucks. write a program to calculate the
total collection and check whether the plaza made profit (collection >= Rs. 10,000) or
loss.*/


#include <stdio.h>

int main() {
    int cars, trucks, collection;

    printf("Enter number of cars: ");
    scanf("%d", &cars);

    printf("Enter number of trucks: ");
    scanf("%d", &trucks);

    collection = (cars * 60) + (trucks * 100);

    printf("Total Collection = Rs. %d\n", collection);

    if (collection >= 10000)
        printf("Profit");
    else
        printf("Loss");

    return 0;
}