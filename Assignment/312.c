#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    int new_word = 1;
    printf("Enter a sentence: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    for (size_t i = 0; text[i] != '\0'; ++i) {
        unsigned char ch = (unsigned char)text[i];
        text[i] = (char)(new_word ? toupper(ch) : tolower(ch));
        new_word = isspace(ch) != 0;
    }
    printf("Title case: %s\n", text);
    return 0;
}
