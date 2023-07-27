#include <stdio.h>

int main()
{
    // Write a C program to print all prime numbers in a given range using a function.
    int n, i, j, flag;
    scanf("%d", &n);
    printPrime(n);
}

int isPrime(int n)
{
    int flag = 0, i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int printPrime(int n)
{
    int i, flag;
    for (i = 2; i <= n; i++)
    {
        flag = isPrime(i);
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}