/* Write a program to count days until the temperature is warmer by a user-given
 * amount. */
#include <stdio.h>

int main(void) {
    int t[100], n, delta, i, j, wait;
    printf("Enter number of days: ");
    scanf("%d", &n);
    printf("Enter daily temperatures: ");
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    printf("Enter temperature increase that counts as warmer: ");
    scanf("%d", &delta);
    printf("Days to wait for a temperature at least %d degrees warmer:\n", delta);
    /* A day counts as warmer when its temperature is at least the chosen increase higher.
     */
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n && t[j] < t[i] + delta; j++)
            ;
        wait = (j < n) ? j - i : 0;
        printf("Day %d: %d\n", i + 1, wait);
    }
    return 0;
}
