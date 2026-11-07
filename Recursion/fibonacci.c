// #include <stdio.h>
// int fibo(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     int a = fibo(n - 1);
//     int b = fibo(n - 2);
//     return a + b;
// }
// int main(void)
// {
//     int n;
//     printf("Enter nth term no. : ");
//     scanf("%d", &n);
//     printf("The nth term is %d", fibo(n));
//     return 0;
// }

// #include <stdio.h>

// int fibo(int n) {
//     if (n == 1 || n == 2)
//         return 1;

//     int a = fibo(n - 1);
//     int b = fibo(n - 2);

//     return a + b;
// }

// int main(void) {
//     int n;

//     printf("Enter nth term no. : ");
//     scanf("%d", &n);

//     if (n < 1) {
//         printf("Enter a positive integer.");
//         return 1;
//     }

//     printf("The nth term is %d", fibo(n));

//     return 0;
// }

//print the series 
// #include <stdio.h>
// int fibo(int n){
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// void pr(int i,int n){
//     if(i==n) return;
//     printf("%d  ",fibo(i));
//     return pr(i+1,n);
// }

// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     pr(0,n);
//     return 0;
// }


#include <stdio.h>
void fibo(int a, int b, int n) {
    if(n==0||n==1) return ;
    printf("%d  ",a+b);
    return fibo(b,a+b,n-1);
}


int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    fibo(0,1,n);
    return 0;
}
