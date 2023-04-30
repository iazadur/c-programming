#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int a[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int temp = s[i] - 'a';
        a[temp]++;
    }
    for (int j = 0; j < 26; j++)
    {
        printf("%c - %d \n", 'a' + j, a[j]);
    }
    return 0;
}