#include <stdio.h>
#include<stdbool.h>

int main(){
    int a[100],n,m,i,x = -1;
    bool flag = false;
    printf("Enter number of array : ");
    scanf("%d",&n);
    printf("Enter array element : \n");
    for(i =0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter number to search :");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            flag = true;
            x = i;
            break;
        }
    }
    if(flag) printf("%d found at position(index number) %d",m,x);
    else printf("%d is not found in this array",m);
    return 0;
}