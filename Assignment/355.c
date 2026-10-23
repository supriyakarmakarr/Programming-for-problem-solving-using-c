#include <stdio.h>
#define MAX_LENGTH 512
int main(void) {
    char s[MAX_LENGTH];
    size_t w = 0;
    printf("Enter text (newline characters will be removed): ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t r = 0; s[r]; r++)
        if (s[r] != '\n' && s[r] != '\r')
            s[w++] = s[r];
    s[w] = 0;
    printf("Without newlines: %s\n", s);
    return 0;
}
