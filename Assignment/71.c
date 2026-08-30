// Write a program to count the number of digits in a given number.

#include <stdio.h>

int main(){
    int n , c = 0;
    printf("Enter number : ");
    scanf("%d",&n);
     while(n!= 0){
        n = n/10;
        c++;
     }
     printf("Count of this number is %d",c);
    return 0;
}