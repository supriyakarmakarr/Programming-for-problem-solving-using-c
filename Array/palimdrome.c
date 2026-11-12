
#include <stdio.h>
#include<stdbool.h>
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
    bool flag = true;
    for (i=0;i<n/2;i++) {
        if (arr[i] != arr[n-1-i]) {
            flag = false;
            break;
        }
    }
    if (flag)
        printf("Array is Palindrome");
    else
        printf("Array is not Palindrome");

    return 0;
}
