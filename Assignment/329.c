#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
static size_t count_from_center(const char *s, size_t n, int left, int right) {
    size_t count = 0;
    while (left >= 0 && (size_t)right < n && s[left] == s[right]) {
        ++count;
        --left;
        ++right;
    }
    return count;
}
int main(void) {
    char text[MAX_LENGTH];
    size_t total = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    for (size_t i = 0; i < n; ++i) {
        total += count_from_center(text, n, (int)i, (int)i);
        total += count_from_center(text, n, (int)i, (int)i + 1);
    }
    printf("Palindromic substrings (including single characters): %zu\n", total);
    return 0;
}
