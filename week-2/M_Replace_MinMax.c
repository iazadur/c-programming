#include <stdio.h>
int main()
{
    int n, min, max;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i] == min ? max : a[i] == max ? min : a[i]);
    }
    
    return 0;
}