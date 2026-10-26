#include <stdio.h>
int power(int n, int p){
    if(p == 0) return 1;
    return n*power(n,p-1);
}

int main(void){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter power : ");
    scanf("%d",&p);
    printf("%d raised to the power %d is %d",n,p,power(n,p));
    return 0;
}