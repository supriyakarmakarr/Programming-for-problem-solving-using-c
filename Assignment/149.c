/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", 2 * j - (i % 2));
        }
        printf("\n");
    }

    return 0;
}