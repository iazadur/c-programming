#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i, j, x;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int p = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                p = 1;
                break;
            }
        }
    }
    if (p == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}