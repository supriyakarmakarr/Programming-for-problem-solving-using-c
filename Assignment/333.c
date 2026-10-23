#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
#define MAX_STRINGS 32
int main(void) {
    char strings[MAX_STRINGS][MAX_LENGTH];
    size_t count;
    printf("How many strings (1-%d)? ", MAX_STRINGS);
    if (scanf("%zu", &count) != 1 || count == 0 || count > MAX_STRINGS) {
        puts("Invalid count.");
        return 1;
    }
    getchar();
    for (size_t i = 0; i < count; ++i) {
        printf("String %zu: ", i + 1);
        if (fgets(strings[i], sizeof strings[i], stdin) == NULL)
            return 1;
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }
    size_t length = strlen(strings[0]);
    for (size_t i = 1; i < count; ++i) {
        size_t j = 0;
        while (j < length && strings[i][j] == strings[0][j])
            ++j;
        length = j;
    }
    printf("Longest common prefix: %.*s\n", (int)length, strings[0]);
    return 0;
}
