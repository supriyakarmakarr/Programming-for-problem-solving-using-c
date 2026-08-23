// Write a program to take a character (In Python string) as input and check if it is uppercase
// or lowercase.


#include <stdio.h>

int main(){
    char ch;
    printf("Enter a alphabate : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    printf("UpperCase");
    else if(ch >= 'a' && ch <= 'z')
    printf("LowerCase");
    else
    printf("Not a alphabate");
    return 0;
}