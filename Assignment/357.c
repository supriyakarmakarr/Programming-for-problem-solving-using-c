#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 512
int main(void) {
    char s[MAX_LENGTH];
    size_t width;
    printf("Enter text: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    printf("Wrap width: ");
    if (scanf("%zu", &width) != 1 || !width) {
        puts("Width must be positive.");
        return 1;
    }
    for (size_t i = 0; s[i]; i++) {
        putchar(s[i]);
        if ((i + 1) % width == 0 && s[i + 1])
            putchar('\n');
    }
    putchar('\n');
    return 0;
}
