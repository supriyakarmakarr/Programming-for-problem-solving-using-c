#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    int valid = 1;
    printf("Enter an identifier: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    if (text[0] == '\0' || !(isalpha((unsigned char)text[0]) || text[0] == '_'))
        valid = 0;
    for (size_t i = 1; text[i] != '\0'; ++i)
        if (!(isalnum((unsigned char)text[i]) || text[i] == '_'))
            valid = 0;
    puts(valid ? "Valid C-style identifier." : "Invalid C-style identifier.");
    return 0;
}
