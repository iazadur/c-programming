#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int n[r][c];
    int n1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&n1[i][j]);
        }
    }
    int sum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            sum[i][j]=n[i][j]+n1[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    

}