#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    size_t n = strlen(s);
    for (size_t i = 0; i < n; i++)
        for (size_t j = i + 1; j < n; j++)
            if ((unsigned char)s[i] > (unsigned char)s[j]) {
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
    printf("Sorted characters: %s\n", s);
    return 0;
}
