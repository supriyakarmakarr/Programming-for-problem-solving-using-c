#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH];
    size_t w = 0;
    int space = 0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    for (size_t r = 0; s[r]; r++) {
        if (isspace((unsigned char)s[r]))
            space = w > 0;
        else {
            if (space)
                s[w++] = ' ';
            s[w++] = s[r];
            space = 0;
        }
    }
    s[w] = 0;
    printf("Normalized string: %s\n", s);
    return 0;
}
