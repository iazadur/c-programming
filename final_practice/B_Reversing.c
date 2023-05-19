#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int f = 0, l = i - 1;
            while (f <= l)
            {
                int temp = a[f];
                a[f] = a[l];
                a[l] = temp;
                f++;
                l--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}