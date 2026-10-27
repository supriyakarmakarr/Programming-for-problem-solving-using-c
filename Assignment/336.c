/*
 * 336. Write a program to replace a substring with another substring.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter substring to replace: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    char u[1024];
    printf("Enter replacement: ");
    if (!fgets(u, sizeof u, stdin)) return 1;
    u[strcspn(u, "\n")] = '\0';
    char out[4096];
    size_t n = 0, lt = strlen(t), lu = strlen(u);
    for (const char *p = s; *p; ) {
        if (lt && strncmp(p, t, lt) == 0) {
            if (n + lu >= sizeof out) return 1;
            memcpy(out + n, u, lu);
            n += lu, p += lt;
        } else {
            if (n + 1 >= sizeof out) return 1;
            out[n++] = *p++;
        }
    }
    out[n] = '\0';
    printf("Result: %s\n", out);
    return 0;
}
