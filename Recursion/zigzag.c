#include <stdio.h>
void zz(int n){
    if(n==0) return;
    printf(" %d",n);
    zz(n-1);
    printf(" %d",n);
    zz(n-1);
    printf(" %d",n);
    return;
}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    zz(n);
    return 0;
}