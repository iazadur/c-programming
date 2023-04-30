
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


// 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1