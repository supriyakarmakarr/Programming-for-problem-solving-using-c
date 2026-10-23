#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void)
{
    char text[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    int valid = text[0] != '\0';
    for (size_t i = 0; text[i] != '\0'; ++i)
        if (text[i] < '0' || text[i] > '9')
            valid = 0;
    puts(valid ? "The string contains only digits." : "The string does not contain only digits.");
    return 0;
}
