// Write a program to find the second largest of three numbers.


#include <stdio.h>

int main(){
    int a,b,c,larg,sec;
    printf("Enter 3 number :\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        larg = a;
        if(b>=c)
        sec = b;
        else
        sec = c;
    }
    else if(b>c && b>a){
        larg = b;
        if(a>=c)
        sec = a;
        else
        sec = c;
    }
    else{
        larg =c;
        if(a>=b)
        sec = a;
        else
        sec = b;
    }

    printf("Second largest number is %d", sec);

    return 0;
}