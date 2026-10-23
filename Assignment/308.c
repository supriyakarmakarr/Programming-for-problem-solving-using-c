#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], part[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter a substring: ");
    if (fgets(part, sizeof part, stdin) == NULL)
        return 1;
    part[strcspn(part, "\n")] = '\0';
    puts(strstr(text, part) != NULL ? "Substring found." : "Substring not found.");
    return 0;
}
