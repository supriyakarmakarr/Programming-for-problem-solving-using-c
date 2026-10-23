#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 128
int main(void) {
    char s[MAX_LENGTH];
    printf("Enter a string (up to %d characters): ", MAX_LENGTH - 1);
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    size_t n = strlen(s);
    puts("Substrings:");
    for (size_t a = 0; a < n; a++)
        for (size_t len = 1; a + len <= n; len++)
            printf("%.*s\n", (int)len, s + a);
    return 0;
}
