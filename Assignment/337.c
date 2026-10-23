#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH], part[MAX_LENGTH], result[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Substring to remove: ");
    if (fgets(part, sizeof part, stdin) == NULL)
        return 1;
    part[strcspn(part, "\n")] = '\0';
    if (part[0] == '\0') {
        puts("The substring cannot be empty.");
        return 0;
    }
    size_t used = 0, length = strlen(part);
    for (char *p = text; *p;) {
        char *match = strstr(p, part);
        size_t chunk = match ? (size_t)(match - p) : strlen(p);
        memcpy(result + used, p, chunk);
        used += chunk;
        p += chunk;
        if (match)
            p += length;
    }
    result[used] = '\0';
    printf("Result: %s\n", result);
    return 0;
}
