// Write a program to print ASCII values of characters from A to Z.


#include <stdio.h>

int main() {
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }

    return 0;
}