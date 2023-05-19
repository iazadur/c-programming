#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
 
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
   return 0;
}