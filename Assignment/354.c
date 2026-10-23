#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
#define MAX_WORDS 128
#define WORD_LENGTH 64
int main(void) {
    char s[MAX_LENGTH], words[MAX_WORDS][WORD_LENGTH];
    size_t counts[MAX_WORDS] = {0}, unique = 0;
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i];) {
        while (s[i] && !isalnum((unsigned char)s[i]))
            i++;
        char w[WORD_LENGTH];
        size_t n = 0;
        while (s[i] && isalnum((unsigned char)s[i])) {
            if (n + 1 < sizeof w)
                w[n++] = (char)tolower((unsigned char)s[i]);
            i++;
        }
        if (!n)
            continue;
        w[n] = 0;
        size_t j = 0;
        while (j < unique && strcmp(words[j], w))
            j++;
        if (j == unique && unique < MAX_WORDS) {
            strcpy(words[unique], w);
            counts[unique++] = 0;
        }
        if (j < unique)
            counts[j]++;
    }
    if (!unique) {
        puts("No words found.");
        return 0;
    }
    size_t b = 0;
    for (size_t i = 1; i < unique; i++)
        if (counts[i] > counts[b])
            b = i;
    printf("Most frequent word: %s (%zu occurrences)\n", words[b], counts[b]);
    return 0;
}
