#include <stdio.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    int seen[256] = {0}, unique = 1;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i) {
        unsigned char ch = (unsigned char)text[i];
        if (seen[ch]) {
            unique = 0;
            break;
        }
        seen[ch] = 1;
    }
    puts(unique ? "All characters are unique." : "The string contains duplicate characters.");
    return 0;
}
