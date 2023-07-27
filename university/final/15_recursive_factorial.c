#include <stdio.h>
#include <math.h>
double fact(double n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

double f(double n, double x)
{
    
    double sum = 0,i,j ;
    for (int i = 1; i <= n; i += 2)
    {
        double j = 2 * i - 1;
        if (i % 2 == 0)
        {
            sum -= (x * pow(x,j)/fact(j)) ;
        }
        else
        {
            sum += (x * pow(x, j) / fact(j));
        }
    }
    return sum;
}
int main()
{
    // Write a C program to use recursive calls to evaluate F(x) = x – x*3 / 3! + x*5 / 5 ! – x*7 / 7! + … x*n/ n!
    double n, x;
    scanf("%lf%lf", &n, &x);
    // printf("%lf", pow(x, 2));
    printf("%d", f(n, x));
}

