#include <stdio.h>
#define MAX_LENGTH 256
static size_t string_length(const char *text) {
    const char *end = text;
    while (*end != '\0')
        ++end;
    return (size_t)(end - text);
}
int main(void) {
    char text[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    char *newline = text;
    while (*newline != '\0' && *newline != '\n')
        ++newline;
    *newline = '\0';
    printf("String length: %zu\n", string_length(text));
    return 0;
}
