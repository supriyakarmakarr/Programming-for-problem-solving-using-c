//WAP to reverse string without buildin function

#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("Reverse string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}


//with build in function



#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    strrev(str);

    printf("Rev = %s", str);

    return 0;
}

