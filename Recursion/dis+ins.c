#include <stdio.h>
void incresing(int n){
    if(n == 0) return;
    printf("%d\n",n);
    incresing(n-1);
    printf("%d\n",n);
    return;
}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    incresing(n);
    return 0;
}
