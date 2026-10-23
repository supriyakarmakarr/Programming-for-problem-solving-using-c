#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
#define OUTPUT_LENGTH 512
int main(void) {
    char text[MAX_LENGTH], encoded[OUTPUT_LENGTH] = "";
    size_t write = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    for (size_t i = 0; i < n;) {
        size_t run = 1;
        while (i + run < n && text[i + run] == text[i])
            ++run;
        int written = snprintf(encoded + write, sizeof encoded - write, "%c%zu", text[i], run);
        if (written < 0 || (size_t)written >= sizeof encoded - write) {
            puts("Encoded output is too long.");
            return 1;
        }
        write += (size_t)written;
        i += run;
    }
    printf("Run-length encoded string: %s\n", encoded);
    return 0;
}
