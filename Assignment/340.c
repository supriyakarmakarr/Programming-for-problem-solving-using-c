#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH];
    size_t sentences = 0;
    int in_terminator = 0;
    printf("Enter text: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        int terminator = text[i] == '.' || text[i] == '!' || text[i] == '?';
        if (terminator && !in_terminator)
            ++sentences;
        in_terminator = terminator;
    }
    printf("Number of sentences: %zu\n", sentences);
    return 0;
}
