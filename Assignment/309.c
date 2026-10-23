#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], part[MAX_LENGTH];
    size_t count = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter a substring: ");
    if (fgets(part, sizeof part, stdin) == NULL)
        return 1;
    part[strcspn(part, "\n")] = '\0';
    if (part[0] == '\0') {
        puts("An empty substring has infinitely many overlapping matches; enter a non-empty "
             "substring.");
        return 0;
    }
    for (char *p = text; (p = strstr(p, part)) != NULL; ++p) {
        printf("Match at index %td\n", p - text);
        ++count;
    }
    printf("Total occurrences: %zu\n", count);
    return 0;
}
