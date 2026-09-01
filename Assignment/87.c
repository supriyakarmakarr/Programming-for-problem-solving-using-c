//  Write a program to calculate the power of a number without using built-in functions.


#include <stdio.h>
#include <math.h>

int main(){
    int a , b;
    double c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    c = pow(a,b);
    printf("%d to the power %d is %0.1f",a,b,c);

    return 0;
}