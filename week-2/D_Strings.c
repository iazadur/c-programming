#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    int n = strlen(a);
    int m = strlen(b);
    printf("%d %d\n", n, m);
    printf("%s%s\n", a, b);
    char temp[n];
    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];
    printf("%s %s", a, b);
}