#include <limits.h>
#include <stdio.h>

int main(void) {
    unsigned int terms;
    unsigned long long current = 0, next_term = 1;

    printf("Number of Fibonacci terms (0-94): ");
    if (scanf("%u", &terms) != 1 || terms > 94) {
        puts("Enter a term count from 0 to 94.");
        return 1;
    }

    for (unsigned int index = 0; index < terms; ++index) {
        printf("%llu%s", current, index + 1 < terms ? " " : "\n");
        if (index + 1 == terms)
            break;

        if (index + 2 == terms) {
            current = next_term;
            continue;
        }
        if (ULLONG_MAX - current < next_term) {
            puts("Series overflow.");
            return 1;
        }
        unsigned long long sum = current + next_term;
        current = next_term;
        next_term = sum;
    }

    if (terms == 0)
        putchar('\n');
    return 0;
}
