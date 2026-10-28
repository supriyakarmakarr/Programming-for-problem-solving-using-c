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
    printf("The array is : ");
    for ( i =0;i<n;i++) printf("%d  ",a[i]);
    printf("\nAlso in reverse order : ");
    for ( i =n-1;i>=0;i--) printf("%d  ",a[i]);
    return 0;
}
