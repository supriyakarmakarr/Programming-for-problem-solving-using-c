#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH];
    size_t characters = 0, words = 0;
    int in_word = 0;
    printf("Enter one line of text: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i) {
        ++characters;
        if (isspace((unsigned char)text[i]))
            in_word = 0;
        else if (!in_word) {
            ++words;
            in_word = 1;
        }
    }
    printf("Characters: %zu\nWords: %zu\nLines: %d\n", characters, words, characters > 0 ? 1 : 0);
    return 0;
}
