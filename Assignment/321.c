#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], letters[MAX_LENGTH];
    size_t write = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i)
        if (isalpha((unsigned char)text[i]))
            letters[write++] = text[i];
    letters[write] = '\0';
    printf("Extracted alphabets: %s\n", letters);
    return 0;
}
