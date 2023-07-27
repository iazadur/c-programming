#include<stdio.h>
int main(){
    // .Write a C program to find a digit(first, last, min, max) from an array
    int n, i, first, last, min, max;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    last = arr[n - 1];
    min = arr[0];
    max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("First: %d\nLast: %d\nMin: %d\nMax: %d", first, last, min, max);
}