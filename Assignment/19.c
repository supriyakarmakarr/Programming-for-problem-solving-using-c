// Write a program to delete the last two digits of any user given input number.

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter your number : ");
    scanf("%d",&a);
    b = a/100;
    printf("After removing last two digit from %d is %d",a,b);
    
    return 0;
}