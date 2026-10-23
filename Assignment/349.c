#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], replacement;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    printf("Replace spaces with which character? ");
    if (scanf(" %c", &replacement) != 1)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i)
        if (text[i] == ' ')
            text[i] = replacement;
    printf("Updated string: %s\n", text);
    return 0;
}
