#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        int num[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &num[i]);
        }
        if (a & 1)
        {
            printf("-1\n");
        }
        else
        {

            int odd = 0, even = 0, helf = n / 2;
            for (int i = 0; i < a; i++)
            {
                if (num[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if (odd == even)
            {
                printf("0\n");
            }
            else
            {
                int temp = abs(odd - even);
                printf("%d\n", temp / 2);
            }
        }
    }
}