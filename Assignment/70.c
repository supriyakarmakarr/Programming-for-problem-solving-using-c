// Write a program to calculate the factorial of a given number.


#include <stdio.h>

int main(){
    int n , fact = 1;
    printf("Enter your number : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i ++){
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    return 0;
}