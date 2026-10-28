#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element number : \n");
    for ( i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int even =0,odd =0;
    for ( i =0;i<n;i++){
        if(i%2 != 0){
            even += a[i];
        }
        else odd += a[i];
    }
    printf("The difference is %d",abs(odd - even));
    return 0;
}
