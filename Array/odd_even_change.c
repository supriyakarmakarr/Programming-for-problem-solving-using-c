#include <stdio.h>

int main(void){
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element number : \n");
    for ( i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for ( i =0;i<n;i++){
        if(i%2 != 0){
            a[i] *= 2;    // multiple to 2
        }
        else a[i] += 10;    // increas by 10
    }
    printf("The final array is : \n");
    for ( i =0;i<n;i++) printf("%d  ",a[i]);
    return 0;
}
