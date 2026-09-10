/*
A B C D E
B C D E
C D E
D E
E
*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}