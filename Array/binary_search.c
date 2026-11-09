#include <stdio.h>

int main(){
    int a[100],n,low,mid,high,i,m;
    printf("Enter number of element : ");
    scanf("%d",&n);
    printf("Enter array element in assending order : \n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to found :");
    scanf("%d",&m);
    low = 0;
    high = n-1;
    while(low <= high){
        mid = (low+high)/2;
        if(m==a[mid]){
            printf("%d found at position %d",m,mid+1);
            return 0;
        }
        else if(m<a[mid]) high =mid-1;
        else low = mid +1;
    }
    printf("%d is not found in array",m);
    return 0;
}