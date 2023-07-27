#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    int max=marks[0];
    for(int i=1;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",max-marks[i]);
    }
    
}