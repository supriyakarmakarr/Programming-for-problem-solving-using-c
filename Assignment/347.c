#include <ctype.h>
#include <stdio.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    int seen[26] = {0}, isogram = 1;
    printf("Enter a word or phrase: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        int ch = tolower((unsigned char)text[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (seen[ch - 'a'])
                isogram = 0;
            seen[ch - 'a'] = 1;
        }
    }
    puts(isogram ? "The text is an isogram." : "The text is not an isogram.");
    return 0;
}
