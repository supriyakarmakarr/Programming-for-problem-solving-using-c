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
    int max = a[0];
    int index;
    for ( i =0;i<n;i++){
        if(a[i]>max){
            max = a[i];
            index = i;
        } 
    }
    printf("The max element is %d at index %d ",max ,index);
    return 0;
}
