#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
#define MAX_WORDS 64
int main(void) {
    char pattern[MAX_LENGTH], sentence[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    size_t count = 0;

    printf("Enter a pattern (for example, abba): ");
    if (fgets(pattern, sizeof pattern, stdin) == NULL)
        return 1;
    pattern[strcspn(pattern, "\n")] = '\0';

    printf("Enter the word sequence: ");
    if (fgets(sentence, sizeof sentence, stdin) == NULL)
        return 1;
    for (char *word = strtok(sentence, " \t\r\n"); word != NULL && count < MAX_WORDS;
         word = strtok(NULL, " \t\r\n")) {
        strncpy(words[count], word, MAX_LENGTH - 1);
        words[count][MAX_LENGTH - 1] = '\0';
        ++count;
    }

    int valid = strlen(pattern) == count;
    for (size_t i = 0; valid && i < count; ++i) {
        for (size_t j = 0; j < i; ++j) {
            if ((pattern[i] == pattern[j]) != (strcmp(words[i], words[j]) == 0)) {
                valid = 0;
                break;
            }
        }
    }

    puts(valid ? "The word sequence follows the pattern."
               : "The word sequence does not follow the pattern.");
    return 0;
}
