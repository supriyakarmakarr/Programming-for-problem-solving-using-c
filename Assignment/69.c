// Write a program to calculate the sum of odd numbers up to N.



#include <stdio.h>

int main(){
    int n,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        if(i %2!=0)
        sum += i;
    }
    printf("So the sum is %d",sum);
    return 0;
}