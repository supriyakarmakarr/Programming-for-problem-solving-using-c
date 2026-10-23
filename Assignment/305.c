#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], target;
    size_t count = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Enter a character: ");
    if (scanf(" %c", &target) != 1)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i)
        count += text[i] == target;
    printf("Occurrences of '%c': %zu\n", target, count);
    return 0;
}
