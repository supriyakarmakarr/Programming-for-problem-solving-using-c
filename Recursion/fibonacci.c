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

#include <stdio.h>

int fibo(int n) {
    if (n == 1 || n == 2)
        return 1;

    int a = fibo(n - 1);
    int b = fibo(n - 2);

    return a + b;
}

int main(void) {
    int n;

    printf("Enter nth term no. : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive integer.");
        return 1;
    }

    printf("The nth term is %d", fibo(n));

    return 0;
}