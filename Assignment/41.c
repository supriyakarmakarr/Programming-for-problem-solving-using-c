/*Write a program to calculate final price after discount:
Above 5000: 20% discount
2000-5000: 10% discount
Below 2000: 5% discount*/


#include <stdio.h>

int main() {
    float price, discount, final_price;

    printf("Enter price: ");
    scanf("%f", &price);

    if (price > 5000)
        discount = 20;
    else if (price >= 2000)
        discount = 10;
    else
        discount = 5;

    final_price = price - (price * discount / 100);

    printf("Discount = %.2f%%\n", discount);
    printf("Final Price = Rs. %.2f", final_price);

    return 0;
}