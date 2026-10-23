#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char u[MAX_LENGTH];
    printf("Enter a URL: ");
    if (!fgets(u, sizeof u, stdin))
        return 1;
    u[strcspn(u, "\n")] = 0;
    char *h = NULL;
    if (!strncmp(u, "https://", 8))
        h = u + 8;
    else if (!strncmp(u, "http://", 7))
        h = u + 7;
    int ok = h && *h && strchr(h, '.');
    for (size_t i = 0; ok && u[i]; i++)
        if (isspace((unsigned char)u[i]))
            ok = 0;
    if (ok && (h[0] == '.' || h[0] == '/'))
        ok = 0;
    puts(ok ? "URL passes basic format checks." : "Invalid URL format.");
    return 0;
}
