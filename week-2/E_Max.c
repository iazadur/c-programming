#include<stdio.h>
int main()
{
    int n, i, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}