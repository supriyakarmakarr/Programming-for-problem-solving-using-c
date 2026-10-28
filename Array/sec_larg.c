#include <stdio.h>
#include<limits.h>

int main(void){
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n];
    for ( i =0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for ( i =0;i<n;i++){
        if(a[i]>max){
            smax = max;
            max = a[i];
        }
        else if(smax<a[i] && max != a[i]) smax = a[i]; 
    }
    printf("The second max is %d ",smax);
    return 0;
}
