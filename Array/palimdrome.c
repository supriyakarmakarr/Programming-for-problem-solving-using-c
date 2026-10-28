
#include <stdio.h>
int main(void) {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size");
        return 0;
    }
    int arr[n];
    printf("Enter array elements:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int x = 1;
    for (i=0;i<n/2;i++) {
        if (arr[i] != arr[n-1-i]) {
            x = 0;
            break;
        }
    }
    if (x == 1)
        printf("Array is Palindrome");
    else
        printf("Array is not Palindrome");

    return 0;
}
