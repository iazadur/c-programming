#include <stdio.h>
int main()
{
    int i, j;
    int a[4][3];
    int b[4][3];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            scanf("%d", &b[i][j]);
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
  
}