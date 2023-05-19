#include<stdio.h>
long long int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int ft= fact(n);
    printf("%lld",ft);
}