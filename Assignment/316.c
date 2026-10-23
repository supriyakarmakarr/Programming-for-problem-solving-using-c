#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    size_t write = 0;
    int pending_space = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    for (size_t read = 0; text[read] != '\0'; ++read) {
        if (isspace((unsigned char)text[read]))
            pending_space = write > 0;
        else {
            if (pending_space)
                text[write++] = ' ';
            text[write++] = text[read];
            pending_space = 0;
        }
    }
    text[write] = '\0';
    printf("Normalized string: %s\n", text);
    return 0;
}
