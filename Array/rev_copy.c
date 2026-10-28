#include <stdio.h>

int main(void){
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter array element : \n");
    for ( i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for ( i =0;i<n;i++){
        b[i] = a[n-1-i];
    }
    for ( i =0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
