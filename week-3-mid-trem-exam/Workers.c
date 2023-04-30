#include <stdio.h>
int main()
{
    int m1, m2, d, result;
    scanf("%d %d %d", &m1, &m2, &d);
    result = (m1 * d) / m2;
    printf("%d", result);
    return 0;
}