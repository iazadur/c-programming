#include<stdio.h>
int main(){
    // Write a C program to find the sum of Series : 1*2 + 2*2 + 3*2 + 4*2 +….+ N*2
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum += i * 2;
    }
    printf("%d", sum);
}