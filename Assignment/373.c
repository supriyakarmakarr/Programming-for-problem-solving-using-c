#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH];
    size_t last[256], start = 0, beststart = 0, best = 0;
    for (size_t i = 0; i < 256; i++)
        last[i] = (size_t)-1;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    for (size_t i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] != (size_t)-1 && last[c] >= start)
            start = last[c] + 1;
        last[c] = i;
        size_t len = i - start + 1;
        if (len > best) {
            best = len;
            beststart = start;
        }
    }
    printf("Longest substring without repeats: %.*s\n", (int)best, s + beststart);
    return 0;
}
