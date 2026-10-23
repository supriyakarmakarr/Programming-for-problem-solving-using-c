#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char first[MAX_LENGTH] = {0}, second[MAX_LENGTH] = {0};
    printf("Enter the first string: ");
    if (fgets(first, sizeof first, stdin) == NULL)
        return 1;
    first[strcspn(first, "\n")] = '\0';
    printf("Enter the second string: ");
    if (fgets(second, sizeof second, stdin) == NULL)
        return 1;
    second[strcspn(second, "\n")] = '\0';
    /* XOR swaps each byte in place, so no temporary variable is needed. */
    for (size_t i = 0; i < sizeof first; ++i) {
        first[i] ^= second[i];
        second[i] ^= first[i];
        first[i] ^= second[i];
    }
    printf("After swapping:\nFirst string: %s\nSecond string: %s\n", first, second);
    return 0;
}
