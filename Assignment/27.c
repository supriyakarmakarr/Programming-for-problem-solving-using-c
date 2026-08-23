// Write a program to find the largest of four numbers.

#include <stdio.h>

int main(){
    int a,b,c,d,largest;
    printf("Enter 4 number :\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    largest = a;
    if(b>largest)
    largest=b;
    if(c>largest)
    largest=c;
    if(d>largest)
    largest=d;

    printf("Largest number is %d", largest);
    return 0;
}