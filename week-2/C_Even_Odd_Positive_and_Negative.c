#include <stdio.h>
int main()
{
    int i, n, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}