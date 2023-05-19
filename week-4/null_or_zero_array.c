#include<stdio.h>
int main(){
    int c,r;
    scanf("%d %d",&r,&c);
    int temp = r*c;
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d",&n[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
           if (n[i][j]==0)
           {
               cnt++;
           }
           
        }
    }
    if (cnt == temp)
    {
        printf("Zero Matrix");
    }
    else if (cnt == 0)
    {
        printf("Null Matrix");
    }
    else
    {
        printf("Niether Null nor Zero Matrix");
    }
    
    return 0;
}