#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    int new_word = 1;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    for (size_t i = 0; text[i] != '\0'; ++i) {
        unsigned char ch = (unsigned char)text[i];
        if (isalpha(ch) && new_word)
            text[i] = (char)toupper(ch);
        new_word = isspace(ch) != 0;
    }
    printf("Capitalized string: %s\n", text);
    return 0;
}
