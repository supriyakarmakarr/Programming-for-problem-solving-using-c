// Write a program to find the last digit of a number without using % modulus operator.

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b = a - (a/10)*10;
    printf("So last digit of %d is %d",a,b);
    
    return 0;
}

/*
string se bhi kara ja sakta hai

    char num[20];

    printf("Enter a number: ");
    scanf("%s", num);

    int i = 0;
    while (num[i] != '\0')
        i++;

    printf("Last digit = %c\n", num[i - 1]);
*/