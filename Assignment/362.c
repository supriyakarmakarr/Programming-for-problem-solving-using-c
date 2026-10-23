#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH], best[MAX_LENGTH], candidate[MAX_LENGTH];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    size_t n = strlen(s);
    if (!n) {
        puts("Smallest rotation: ");
        return 0;
    }
    strcpy(best, s);
    for (size_t k = 1; k < n; k++) {
        memcpy(candidate, s + k, n - k);
        memcpy(candidate + n - k, s, k);
        candidate[n] = 0;
        if (strcmp(candidate, best) < 0)
            strcpy(best, candidate);
    }
    printf("Smallest rotation: %s\n", best);
    return 0;
}
