#include <stdio.h>
int main()
{
    int a, b, multiply = 0;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        multiply += b;
    }
    printf("Multiplication of %d and %d is %d\n", a, b, multiply);
}