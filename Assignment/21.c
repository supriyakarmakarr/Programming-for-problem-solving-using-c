#include <stdio.h>

int main(){
    int num,last,sec_last,remaining,result;

    printf("Enter a number : ");
    scanf("%d",&num);

    last = num%10;
    sec_last = (num /10)%10;
    remaining = num/100;

    result = remaining*100 + last*10 + sec_last;

    printf("After swap last two digit now your result is %d",result);
    return 0;
}