//string length without built in function


#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("String length: %d\n", len);
    return 0;
}


// with builtin function 
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  // Remove newline
    printf("String length: %zu\n", strlen(str));

    return 0;
}