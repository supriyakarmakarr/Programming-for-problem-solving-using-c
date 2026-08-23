// Write a program to take a character (In Python string) as input and check if it is an
// alphabet, digit, or special character.


#include <stdio.h>

int main(){
    char ch;
    printf("Enter a charchter : ");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
    printf("Alphabate");
    else if(ch >= '0' && ch <= '9')
    printf("Number");
    else
    printf("Spacial charecter");
    return 0;
}