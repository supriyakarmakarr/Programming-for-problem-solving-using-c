#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], prefix[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter the prefix: ");
    if (fgets(prefix, sizeof prefix, stdin) == NULL)
        return 1;
    prefix[strcspn(prefix, "\n")] = '\0';
    puts(strncmp(text, prefix, strlen(prefix)) == 0
             ? "The string starts with the substring."
             : "The string does not start with the substring.");
    return 0;
}
