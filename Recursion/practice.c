#include <stdio.h>
void ck(int n){
    (n%2==0) ? printf("Even") : printf("Odd");
}

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    ck(n);
    return 0;
}