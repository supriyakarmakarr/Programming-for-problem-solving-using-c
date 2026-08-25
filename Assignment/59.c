// Write a program to print cubes of numbers from 1 to N.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i += 1) {
        printf("%d \n", i*i*i);
    }

    return 0;
}