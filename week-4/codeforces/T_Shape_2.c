#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s > 0; s--)
        {

            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}