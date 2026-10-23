#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 512
#define MAX_WORDS 128
static int compare_words(const void *a, const void *b) {
    return strcmp(*(char *const *)a, *(char *const *)b);
}
int main(void) {
    char text[MAX_LENGTH], *words[MAX_WORDS];
    size_t count = 0;
    printf("Enter a sentence: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (char *word = strtok(text, " \t\r\n"); word != NULL && count < MAX_WORDS;
         word = strtok(NULL, " \t\r\n"))
        words[count++] = word;
    qsort(words, count, sizeof words[0], compare_words);
    printf("Words in lexicographic order:");
    for (size_t i = 0; i < count; ++i)
        printf("%s%s", i ? " " : " ", words[i]);
    putchar('\n');
    return 0;
}
