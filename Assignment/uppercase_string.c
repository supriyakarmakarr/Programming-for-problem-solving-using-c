//without in build function
#include <stdio.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}



// buildin function 

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strupr(str);

    printf("Uppercase: %s", str);
    return 0;
}


//but gcc not support it so use 

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }

    printf("Uppercase string: %s", str);
    return 0;
}