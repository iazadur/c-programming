#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);
    int first = 0;
    int last = n - 1;
    int result = 1;
    while (first <= last)
    {
        if (s[first] != s[last])
        {
            result = 0;
            break;
        }
        first++;
        last--;
    }
    printf("%s", result == 1 ? "YES" : "NO");

    return 0;
}