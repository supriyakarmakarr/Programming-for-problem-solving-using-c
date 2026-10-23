#include <ctype.h>
#include <stdio.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH], r[MAX_LENGTH];
    size_t w = 0;
    int sep = 0;
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i] && s[i] != '\n'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (!isalnum(c)) {
            sep = w > 0;
            continue;
        }
        if (sep)
            r[w++] = '-';
        r[w++] = (char)tolower(c);
        sep = 0;
    }
    r[w] = 0;
    printf("kebab-case: %s\n", r);
    return 0;
}
