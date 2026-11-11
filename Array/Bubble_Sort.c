#include <stdio.h>
#include<stdbool.h>

int main(void) {
    int n, i, j, temp;
    printf("Enter size of Array : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        bool flag = true; //array no sort
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
