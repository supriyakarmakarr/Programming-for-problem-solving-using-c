#include <ctype.h>
#include <stdio.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH];
    size_t count = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i)
        count += ispunct((unsigned char)text[i]) != 0;
    printf("Punctuation marks: %zu\n", count);
    return 0;
}
