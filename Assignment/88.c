// Write a program to find the largest digit in a given number.


#include <stdio.h>

int main(){
    int n ,digit,larg = 0;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        if(digit>larg){
            larg = digit;
        }
        n = n/10;
    }
    printf("Largest number is %d",larg);
    return 0;
}