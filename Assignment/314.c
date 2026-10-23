#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH];
    int letters[26] = {0};
    printf("Enter a sentence: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        unsigned char ch = (unsigned char)tolower((unsigned char)text[i]);
        if (ch >= 'a' && ch <= 'z')
            letters[ch - 'a'] = 1;
    }
    for (int i = 0; i < 26; ++i)
        if (!letters[i]) {
            puts("The string is not a pangram.");
            return 0;
        }
    puts("The string is a pangram.");
    return 0;
}
