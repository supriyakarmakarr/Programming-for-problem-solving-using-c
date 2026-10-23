#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    size_t n = strlen(s);
    int found = 0;
    for (size_t len = 1; len <= n / 2 && !found; len++) {
        if (n % len)
            continue;
        size_t i = len;
        while (i < n && s[i] == s[i % len])
            i++;
        if (i == n) {
            printf("Repeated pattern: %.*s (%zu repetitions)\n", (int)len, s, n / len);
            found = 1;
        }
    }
    if (!found)
        puts("No repeated pattern covers the entire string.");
    return 0;
}
