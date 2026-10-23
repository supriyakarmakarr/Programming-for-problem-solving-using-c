#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char first[MAX_LENGTH], second[MAX_LENGTH], doubled[MAX_LENGTH * 2];
    printf("Enter the first string: ");
    if (fgets(first, sizeof first, stdin) == NULL)
        return 1;
    first[strcspn(first, "\n")] = '\0';
    printf("Enter the second string: ");
    if (fgets(second, sizeof second, stdin) == NULL)
        return 1;
    second[strcspn(second, "\n")] = '\0';
    size_t n = strlen(first);
    if (n != strlen(second)) {
        puts("The strings are not rotations of each other.");
        return 0;
    }
    snprintf(doubled, sizeof doubled, "%s%s", first, first);
    puts(strstr(doubled, second) != NULL ? "The strings are rotations of each other."
                                         : "The strings are not rotations of each other.");
    return 0;
}
