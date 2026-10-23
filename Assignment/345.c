#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    size_t n, best = 0, start = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    n = strlen(text);
    for (size_t i = 0; i < n; ++i)
        for (size_t j = i + 1; j < n; ++j) {
            size_t length = 0;
            while (j + length < n && text[i + length] != '\0' &&
                   text[i + length] == text[j + length])
                ++length;
            if (length > best) {
                best = length;
                start = i;
            }
        }
    printf("Longest repeating substring: %.*s\n", (int)best, text + start);
    return 0;
}
