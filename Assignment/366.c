#include <stdio.h>
#define MAX_LENGTH 512
int main(void) {
    char s[MAX_LENGTH];
    size_t w = 0;
    int tag = 0;
    printf("Enter text: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i] && s[i] != '\n'; i++) {
        if (s[i] == '<')
            tag = 1;
        else if (s[i] == '>')
            tag = 0;
        else if (!tag)
            s[w++] = s[i];
    }
    s[w] = 0;
    printf("Text without tags: %s\n", s);
    return 0;
}
