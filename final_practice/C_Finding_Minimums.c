#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num[i]);
    }

    int temp = 0;
    while (a > 0)
    {
        int min = num[temp];
        for (int i = temp; i < b + temp; i++)
        {
            if (min > num[i])
            {
                min = num[i];
            }
        }
        printf("%d ", min);
        a = a - b;
        temp = temp + b;
    }
    return 0;
}
