#include <stdio.h>
int gcd(int n,int m){
    int r ;
    r =n%m;
    if(r==0) return m;
    else return gcd(m,r);
}

int main(){
    int n,m;
    printf("Enter 1st number : ");
    scanf("%d",&n);
    printf("Enter 2nd number : ");
    scanf("%d",&m);
    printf("GCD = %d",gcd(n,m));
    return 0;
}