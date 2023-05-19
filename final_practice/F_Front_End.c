#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    int f=0,l=n-1,i=0;
    while(f<=l){
       b[i]=a[f];
       b[i+1]=a[l];
        f++;
        l--;
        i+=2;
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}