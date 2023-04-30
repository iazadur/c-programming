#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

// input
// 5
// output
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
