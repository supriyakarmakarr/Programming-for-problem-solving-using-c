// Write a program to calculate the sum of even numbers up to N.

#include <stdio.h>

int main(){
    int n,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&n);

    for(int i = 2;i<=n;i++){
        if(i %2==0)
        sum += i;
    }
    printf("So the sum is %d",sum);
    return 0;
}