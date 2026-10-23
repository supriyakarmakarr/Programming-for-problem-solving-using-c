#include <ctype.h>
#include <stdio.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH], r[MAX_LENGTH];
    size_t w = 0;
    int cap = 0, first = 1;
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i] && s[i] != '\n'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (!isalnum(c)) {
            cap = 1;
            continue;
        }
        r[w++] = (char)(first ? tolower(c) : (cap ? toupper(c) : tolower(c)));
        first = 0;
        cap = 0;
    }
    r[w] = 0;
    printf("camelCase: %s\n", r);
    return 0;
}
