// #include <stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }

// int main(void){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


#include <stdio.h>

int sum(int n){
    if(n == 1 || n ==  0) return 1;
    return n + sum(n-1);
}

int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
