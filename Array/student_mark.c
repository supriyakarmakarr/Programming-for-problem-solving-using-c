#include <stdio.h>

int main(void){
    int n,i;
    printf("Enter number of student : ");
    scanf("%d",&n);
    int a[n];
    for ( i =0;i<n;i++){
        printf("Enter mark of student %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The index which student getting less then 30 are : ");
    for ( i =0;i<n;i++){
        if(a[i]<30) printf(" %d ",i);
    }

    return 0;
}