#include <stdio.h>
int main()
{
   

    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        a = a * (a - 1) / 2;
        b = b * (b + 1) / 2;
        printf("%lld\n", b - a);
    }
}