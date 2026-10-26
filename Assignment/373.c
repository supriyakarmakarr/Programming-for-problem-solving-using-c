
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[256];
    int last[256], start = 0, best = 0, pos = 0;

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 1;

    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];

        if (last[c] >= start)
            start = last[c] + 1;

        last[c] = i;

        if (i - start + 1 > best) {
            best = i - start + 1;
            pos = start;
        }
    }

    printf("Longest substring: %.*s\n", best, s + pos);
    printf("Length: %d\n", best);

    return 0;
}
