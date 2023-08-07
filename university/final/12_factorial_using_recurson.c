#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
int main()
{
    // Write a C program for factorial using recursion
    int n, fact;
    scanf("%d", &n);
    fact = factorial(n);
    printf("%d", fact);
}