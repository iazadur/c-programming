#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y, oddsum = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                oddsum += j;
            }
        }
        printf("%d\n", oddsum);
    }
}