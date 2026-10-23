#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH], old[MAX_LENGTH], replacement[MAX_LENGTH], result[MAX_LENGTH];
    printf("Enter the original string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Substring to replace: ");
    if (fgets(old, sizeof old, stdin) == NULL)
        return 1;
    old[strcspn(old, "\n")] = '\0';
    printf("Replacement: ");
    if (fgets(replacement, sizeof replacement, stdin) == NULL)
        return 1;
    replacement[strcspn(replacement, "\n")] = '\0';
    if (old[0] == '\0') {
        puts("The target substring cannot be empty.");
        return 0;
    }
    size_t used = 0, old_len = strlen(old), new_len = strlen(replacement);
    for (char *p = text; *p;) {
        char *match = strstr(p, old);
        size_t chunk = match ? (size_t)(match - p) : strlen(p);
        if (used + chunk + (match ? new_len : 0) >= sizeof result) {
            puts("Result is too long.");
            return 1;
        }
        memcpy(result + used, p, chunk);
        used += chunk;
        p += chunk;
        if (match) {
            memcpy(result + used, replacement, new_len);
            used += new_len;
            p += old_len;
        }
    }
    result[used] = '\0';
    printf("Updated string: %s\n", result);
    return 0;
}
