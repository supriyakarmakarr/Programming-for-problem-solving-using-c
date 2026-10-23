#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH], rotated[MAX_LENGTH];
    size_t k;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t n = strlen(text);
    printf("Rotate left by how many positions? ");
    if (scanf("%zu", &k) != 1)
        return 1;
    if (n) {
        k %= n;
        memcpy(rotated, text + k, n - k);
        memcpy(rotated + n - k, text, k);
    }
    rotated[n] = '\0';
    printf("Rotated string: %s\n", rotated);
    return 0;
}
