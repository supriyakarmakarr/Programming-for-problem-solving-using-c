#include <stdio.h>
void preinpost(int n){
    if(n==0) return;
    printf("Pre %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
    preinpost(n-1);
    printf("Post %d\n",n);
    return;

}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    preinpost(n);
    return 0;
}


