#include <stdio.h>

int main(void){
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n];
    for ( i =0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for ( i =0;i<n;i++) sum += a[i];
    printf("The sum is : %d",sum);
    return 0;
}
