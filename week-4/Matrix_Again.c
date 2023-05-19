#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int last_row[r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (r - 1 == i)
            {
                printf("%d ", arr[r - 1][j]);
            }
        }
        last_row[i] = arr[i][c - 1];
    }
        printf("\n");
    for (int i = 0; i < r; i++)
    {
        printf("%d ", last_row[i]);
    }



    return 0;
}