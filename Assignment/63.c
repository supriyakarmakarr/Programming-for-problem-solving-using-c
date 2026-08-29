// Write a program to print numbers between two given limits.


#include <stdio.h>

int main(){
    int a , b;
    printf("Enter your starting range : ");
    scanf("%d",&a);
    printf("Enter your ending range : ");
    scanf("%d",&b);

    for(int i =a;i<=b;i ++){
        printf("%d\n",i);
    }
    return 0;
}