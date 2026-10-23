#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], suffix[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter the suffix: ");
    if (fgets(suffix, sizeof suffix, stdin) == NULL)
        return 1;
    suffix[strcspn(suffix, "\n")] = '\0';
    size_t n = strlen(text), m = strlen(suffix);
    puts(m <= n && strcmp(text + n - m, suffix) == 0
             ? "The string ends with the substring."
             : "The string does not end with the substring.");
    return 0;
}
