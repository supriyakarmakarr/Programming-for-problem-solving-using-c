#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
static void expand(const char *s, size_t n, int left, int right, size_t *start, size_t *best) {
    while (left >= 0 && (size_t)right < n && s[left] == s[right]) {
        size_t length = (size_t)(right - left + 1);
        if (length > *best) {
            *start = (size_t)left;
            *best = length;
        }
        --left;
        ++right;
    }
}
int main(void) {
    char text[MAX_LENGTH];
    size_t start = 0, best = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    for (size_t i = 0; i < n; ++i) {
        expand(text, n, (int)i, (int)i, &start, &best);
        expand(text, n, (int)i, (int)i + 1, &start, &best);
    }
    printf("Longest palindromic substring: %.*s\n", (int)best, text + start);
    return 0;
}
