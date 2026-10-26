#include <stdio.h>
void gretting(int n){
    if(n==0) return;
    printf("Good morning \n");
    gretting(n-1);
    return;
}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    gretting(n);
    return 0;
}