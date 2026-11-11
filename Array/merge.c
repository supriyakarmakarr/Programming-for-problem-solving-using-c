#include <stdio.h>

int main(){
    int a[100],b[100],c[200],m,n,i=0,j=0,k=0;
    printf("Enter size of 1st array : ");
    scanf("%d",&n);
    printf("Enter 1st array element : \n");
    for(int x = 0;x<n;x++) scanf("%d",&a[x]);
    printf("Enter size of 2nd array : ");
    scanf("%d",&m);
    printf("Enter 2nd array element : \n");
    for(int x = 0;x<m;x++) scanf("%d",&b[x]);
    while(i<n&&j<m){
        if(a[i]<=b[j]) c[k++]=a[i++];
        else c[k++] = b[j++];
    }
    while(i<n) c[k++]= a[i++];
    while(j<m) c[k++]= b[j++];
    printf("The merged array in reverse order : \n");
    for(i=k-1;i>=0;i--) printf("%d  ",c[i]);
    return 0;
}
