#include <stdio.h>
int main()
{
    int c, r;
    scanf("%d %d", &r, &c);
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    int flag = 1;
    if (r != c)
    {
        flag = 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (n[i][j] != n[0][0])
                {
                    flag = 0;
                }
            }
            else if (n[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not a Scalar Matrix");
    }
}