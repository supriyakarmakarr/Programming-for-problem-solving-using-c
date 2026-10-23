#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    size_t upper = 0, lower = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        upper += isupper((unsigned char)text[i]) != 0;
        lower += islower((unsigned char)text[i]) != 0;
    }
    printf("Uppercase letters: %zu\nLowercase letters: %zu\n", upper, lower);
    return 0;
}
