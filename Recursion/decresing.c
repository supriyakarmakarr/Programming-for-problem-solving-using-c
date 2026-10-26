#include <stdio.h>
void dc(int n){
    if(n == 0) return;
    printf("%d\n",n);
    dc(n-1);
    return;
}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    dc(n);
    return 0;
}