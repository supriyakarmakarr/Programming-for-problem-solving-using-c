#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    size_t counts[256] = {0};
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    for (size_t i = 0; text[i] != '\0'; ++i)
        ++counts[(unsigned char)text[i]];
    if (text[0] == '\0') {
        puts("The string is empty.");
        return 0;
    }
    unsigned char best = (unsigned char)text[0];
    for (size_t i = 0; i < 256; ++i)
        if (counts[i] && counts[i] < counts[best])
            best = (unsigned char)i;
    printf("Least frequent character: '%c' (%zu occurrence(s))\n", best, counts[best]);
    return 0;
}
