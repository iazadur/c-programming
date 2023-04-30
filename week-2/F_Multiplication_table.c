#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}