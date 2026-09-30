#include <stdio.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Duplicate characters: ");

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (int j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j]) {
                printf("%c ", str[i]);
                break;
            }
        }
    }

    return 0;
}