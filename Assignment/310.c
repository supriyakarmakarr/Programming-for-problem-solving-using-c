#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    size_t write = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    for (size_t read = 0; text[read] != '\0'; ++read)
        if (!ispunct((unsigned char)text[read]))
            text[write++] = text[read];
    text[write] = '\0';
    printf("Without punctuation: %s\n", text);
    return 0;
}
