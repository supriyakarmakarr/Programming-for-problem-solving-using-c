#include <stdio.h>

int main(void){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i =0 ;i<n;i++){
        for(int j = i+1 ;j<n;i++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}