#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
static void reverse(char *s, size_t l, size_t r) {
    if (l >= r)
        return;
    char t = s[l];
    s[l] = s[r];
    s[r] = t;
    reverse(s, l + 1, r - 1);
}
int main(void) {
    char s[MAX_LENGTH];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    size_t n = strlen(s);
    if (n)
        reverse(s, 0, n - 1);
    printf("Reversed string: %s\n", s);
    return 0;
}
