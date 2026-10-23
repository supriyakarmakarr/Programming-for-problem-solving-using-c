#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
#define MAX_WORDS 128
#define WIDTH 80
int main(void) {
    char s[MAX_LENGTH], w[MAX_WORDS][MAX_LENGTH];
    size_t n = 0;
    printf("Enter a paragraph (one line): ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (char *p = strtok(s, " \t\r\n"); p && n < MAX_WORDS; p = strtok(NULL, " \t\r\n")) {
        strncpy(w[n], p, MAX_LENGTH - 1);
        w[n++][MAX_LENGTH - 1] = 0;
    }
    for (size_t a = 0; a < n;) {
        size_t b = a, letters = 0;
        while (b < n && letters + strlen(w[b]) + (b > a) <= WIDTH) {
            letters += strlen(w[b]);
            b++;
        }
        if (b == a) {
            printf("%s\n", w[a]);
            a++;
            continue;
        }
        if (b == n || b - a == 1) {
            for (size_t i = a; i < b; i++)
                printf("%s%s", i > a ? " " : "", w[i]);
            putchar('\n');
            a = b;
            continue;
        }
        size_t gaps = b - a - 1, total = WIDTH - letters, each = total / gaps, extra = total % gaps;
        for (size_t i = a; i < b; i++) {
            printf("%s", w[i]);
            if (i + 1 < b)
                for (size_t k = 0; k < each + (i - a < extra); k++)
                    putchar(' ');
        }
        putchar('\n');
        a = b;
    }
    return 0;
}
