#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s;
        scanf("%d", &s);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s)
            {
                flag = 0;
                printf("Case %d: %d\n", k, i + 1);
                break;
            }
            else
            {
                flag++;
            }
        }
        if (flag != 0)
        {
            printf("Case %d: Not Found\n", k);
        }
    }
}