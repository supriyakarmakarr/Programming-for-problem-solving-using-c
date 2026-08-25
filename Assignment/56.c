// Write a program to calculate the sum of numbers from 1 to N.


#include <stdio.h>

int main(){
    int n,sum =0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 0; i <= n; i++){
        sum += i;
    }
    printf("The sum is %d",sum);
    return 0;
}