#include <stdio.h>
int main()
{
    int a, b, div = 0;
    // printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);


    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a >= b)
    {
        a = a - b;
        div++;
    }
    printf("Vag fol is %d \nvag ses is %d\n", div, a);
}