#include <stdio.h>
int count(int n){
    if(n==0) return 0;
    return 1 + count(n/10);
}

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n == 0)
        printf("The number count is 1");
    else
        printf("The number count is %d", count(n));
    return 0;
}