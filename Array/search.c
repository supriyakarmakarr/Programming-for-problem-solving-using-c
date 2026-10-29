#include <stdio.h>

int main() {
    int arr[100], n, x, idx = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("Element not found");
    } else {
        printf("%d is present at index %d", x, idx);
    }

    return 0;
}