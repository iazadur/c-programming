#include<stdio.h>
int main(){
    //  Write a C program to find the reverse of a number
    int n, rev = 0, rem;
    scanf("%d", &n);
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("%d", rev);
    
}