#include <stdio.h>

int main()
{
    int n, i, p = 0;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 1;
            break;
        }
    }
    if (p == 1)
    {
        printf("%d is not prime number", n);
    }
    else
    {
        printf("%d is prime number", n);
    }
    return 0;
}