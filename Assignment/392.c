
#include <stdio.h>

int sum(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main(void) {
    int a[100], n;

    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
        return 1;

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;

    printf("Sum: %d\n", sum(a, n));
    return 0;
}
