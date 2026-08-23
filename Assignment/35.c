// Write a program to check whether an entered character is a vowel using switch case.


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("Vowel");
            break;

        default:
            printf("Not a vowel");
    }

    return 0;
}