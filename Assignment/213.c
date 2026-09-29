/* Write a program to find elements appearing more than n/3 times. */
#include <stdio.h>

int main(void) {
    int a[100], n, i, c1 = 0, c2 = 0, x = 0, y = 0, f1 = 0, f2 = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* There can be at most two such values. Cancel groups of three different values to
     * find candidates. */
    for (i = 0; i < n; i++) {
        if (c1 && a[i] == x)
            c1++;
        else if (c2 && a[i] == y)
            c2++;
        else if (!c1) {
            x = a[i];
            c1 = 1;
        } else if (!c2) {
            y = a[i];
            c2 = 1;
        } else {
            c1--;
            c2--;
        }
    }
    /* Count the candidates again to confirm which ones occur more than n/3 times. */
    for (i = 0; i < n; i++) {
        if (a[i] == x)
            f1++;
        if (a[i] == y)
            f2++;
    }
    printf("Elements occurring more than n/3 times: ");
    if (f1 > n / 3)
        printf("%d ", x);
    if (y != x && f2 > n / 3)
        printf("%d ", y);
    if (f1 <= n / 3 && f2 <= n / 3)
        printf("None");
    return 0;
}
