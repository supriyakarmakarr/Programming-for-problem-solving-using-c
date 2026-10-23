#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char s[MAX_LENGTH], w[MAX_LENGTH];
    size_t count = 0;
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    printf("Enter the word to count: ");
    if (!fgets(w, sizeof w, stdin))
        return 1;
    w[strcspn(w, "\n")] = 0;
    if (!w[0]) {
        puts("Word cannot be empty.");
        return 1;
    }
    size_t n = strlen(w);
    for (size_t i = 0; s[i];) {
        while (s[i] && !isalnum((unsigned char)s[i]))
            i++;
        size_t a = i;
        while (s[i] && isalnum((unsigned char)s[i]))
            i++;
        if (i - a == n) {
            size_t k = 0;
            while (k < n && tolower((unsigned char)s[a + k]) == tolower((unsigned char)w[k]))
                k++;
            if (k == n)
                count++;
        }
    }
    printf("Occurrences (case-insensitive): %zu\n", count);
    return 0;
}
