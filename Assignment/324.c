#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    for (size_t i = 0; i < n; ++i)
        for (size_t j = i + 1; j < n; ++j)
            if ((unsigned char)text[i] > (unsigned char)text[j]) {
                char t = text[i];
                text[i] = text[j];
                text[j] = t;
            }
    printf("Sorted characters: %s\n", text);
    return 0;
}
