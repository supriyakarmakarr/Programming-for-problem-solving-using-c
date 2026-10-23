#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], target;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter a character: ");
    if (scanf(" %c", &target) != 1)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        if (text[i] == target) {
            printf("First occurrence index: %zu\n", i);
            return 0;
        }
    }
    puts("Character not found (index: -1).");
    return 0;
}
