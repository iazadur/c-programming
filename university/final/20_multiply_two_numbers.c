#include<stdio.h>
int main(){
// Write a C program to multiply two numbers using the plus operator.
    int a, b, i, sum = 0;
    scanf("%d%d", &a, &b);
    for(i = 1; i <= b; i++){
        sum += a;
    }
    printf("%d", sum);
}