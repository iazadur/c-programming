#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int slen = strlen(s), tlen = strlen(t);
    printf("%d %d\n", slen, tlen);
    printf("%s %s\n", s, t);
    return 0;
}