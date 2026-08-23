// Write a program to find the second smallest of three numbers.


#include <stdio.h>

int main(){
    int a,b,c,sec;
    printf("Enter 3 number :\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        if(b<=c)
        sec = b;
        else
        sec = c;
    }
    else if(b<c && b<a){
        if(a<=c)
        sec = a;
        else
        sec = c;
    }
    else{
        if(a<=b)
        sec = a;
        else
        sec = b;
    }

    printf("Second Smallest number is %d", sec);

    return 0;
}