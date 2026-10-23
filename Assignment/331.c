#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT 512
#define MAX_OUTPUT 2048
int main(void) {
    char encoded[MAX_INPUT], decoded[MAX_OUTPUT];
    size_t write = 0;
    printf("Enter encoded text (each character followed by its count): ");
    if (fgets(encoded, sizeof encoded, stdin) == NULL)
        return 1;
    encoded[strcspn(encoded, "\n")] = '\0';
    /* Format: a character followed by a positive decimal count, e.g. a3b2. */
    for (size_t i = 0; encoded[i] != '\0';) {
        char value = encoded[i++];
        if (isdigit((unsigned char)value)) {
            puts("Invalid format: run values cannot be digits.");
            return 0;
        }
        size_t count = 0;
        if (!isdigit((unsigned char)encoded[i])) {
            puts("Invalid format: missing character count.");
            return 0;
        }
        while (isdigit((unsigned char)encoded[i])) {
            unsigned digit = (unsigned)(encoded[i++] - '0');
            if (count > (MAX_OUTPUT - digit) / 10) {
                puts("Decoded text is too long.");
                return 1;
            }
            count = count * 10 + digit;
        }
        if (count == 0 || count >= sizeof decoded - write) {
            puts("Invalid count or decoded text is too long.");
            return 1;
        }
        memset(decoded + write, value, count);
        write += count;
    }
    decoded[write] = '\0';
    printf("Decoded string: %s\n", decoded);
    return 0;
}
