#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while (a > 0)
    {
        a = a - b;
        printf("%d ", a);
    }

    return 0;
}

1 2 3 4 5 = odd = 3 , even = 2
2 3 4 5 6 , even = 3 , odd = 1