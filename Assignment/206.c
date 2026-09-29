/* Write a program to count the frequency of each element in an array. */
#include <stdio.h>

int main(void) {
    int a[100], seen[100] = {0}, n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Count each distinct value once, then count its occurrences. */
    printf("Element frequencies:
    printf("Element frequencies:\n");
    for (i = 0; i < n; i++)
        if (!seen[i]) {
        count = 1;
        for (j = i + 1; j < n; j++)
            if (a[i] == a[j]) {
                count++;
                seen[j] = 1;
            }
        printf("%d occurs %d time(s)\n", a[i], count);
        }
    return 0;
}
