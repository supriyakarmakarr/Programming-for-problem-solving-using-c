#include <stdio.h>
int main() {
    int n, target;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array elements: ");
    for (int k=0;k<n;k++) {
        scanf("%d",&arr[k]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int i=0;
    int j=n-1;
    int found=0;

    while (i<j) {
        int sum = arr[i] + arr[j];
        if (sum == target){
            printf("Pair: %d and %d\n", arr[i], arr[j]);
            found = 1;
            break;
        }
        else if (sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    if (found == 0) {
        printf("No pair found\n");
    }
    return 0;
}