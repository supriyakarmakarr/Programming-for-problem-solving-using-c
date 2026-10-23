#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 256

int contains_only_alphabets(const char *text) {
    if (text[0] == '\0') {
        return 0;
    }

    for (size_t index = 0; text[index] != '\0'; index++) {
        char character = text[index];
        int is_uppercase = character >= 'A' && character <= 'Z';
        int is_lowercase = character >= 'a' && character <= 'z';

        if (!is_uppercase && !is_lowercase) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    char input[MAX_INPUT_LENGTH];

    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin) == NULL) {
        fprintf(stderr, "Error: could not read input.\n");
        return 1;
    }

    size_t length = strcspn(input, "\n");
    if (input[length] == '\n') {
        input[length] = '\0';
    } else if (!feof(stdin)) {
        fprintf(stderr, "Error: input is too long. Maximum length is %d characters.\n",
                MAX_INPUT_LENGTH - 1);
        return 1;
    }

    if (contains_only_alphabets(input)) {
        printf("The string contains only alphabets.\n");
    } else {
        printf("The string does not contain only alphabets.\n");
    }

    return 0;
}
