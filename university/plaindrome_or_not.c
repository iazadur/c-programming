#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("NOT Palindrome");
    }

    return 0;
}