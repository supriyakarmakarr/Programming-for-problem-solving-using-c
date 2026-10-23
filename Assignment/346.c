#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 9
static void permute(char *text, size_t start, size_t length) {
    if (start == length) {
        puts(text);
        return;
    }
    for (size_t i = start; i < length; ++i) {
        char temp = text[start];
        text[start] = text[i];
        text[i] = temp;
        permute(text, start + 1, length);
        temp = text[start];
        text[start] = text[i];
        text[i] = temp;
    }
}
int main(void) {
    char text[MAX_LENGTH];
    printf("Enter a string (up to %d characters): ", MAX_LENGTH - 1);
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    if (n > 8) {
        puts("Input is too long; permutation count grows factorially.");
        return 1;
    }
    puts("Permutations:");
    permute(text, 0, n);
    return 0;
}
