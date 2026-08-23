//WAC a program to aecept a number and chake whether it is even or odd (Without using if-else)
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%s\n", (num % 2 == 0) ? "The number is even." : "The number is odd.");
    return 0;
}