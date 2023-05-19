#include <stdio.h>

void recursion(int n)
{
    if (n == 0){
        return;
    }

    recursion(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        recursion(num);
        if (num == 0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    return 0;
}
