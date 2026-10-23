#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 64
int main(void) {
    char number[MAX_LENGTH];
    printf("Enter a 10-digit mobile number: ");
    if (fgets(number, sizeof number, stdin) == NULL)
        return 1;
    number[strcspn(number, "\n")] = '\0';
    int valid = strlen(number) == 10;
    for (size_t i = 0; number[i] != '\0'; ++i)
        valid &= isdigit((unsigned char)number[i]) != 0;
    puts(valid ? "Valid 10-digit mobile number." : "Invalid mobile number.");
    return 0;
}
