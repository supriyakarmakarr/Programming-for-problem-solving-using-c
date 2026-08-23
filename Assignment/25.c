// Write a program to check whether a given year is a leap year or not.


#include <stdio.h>

int main(){
    int a;
    printf("Enter a year : ");
    scanf("%d",&a);

    if((a%400==0)||("a%4==0 && a%100!=0"))
    printf("%d is leap-year",a);
    else
    printf("%d is not leap-year");

    return 0;
}