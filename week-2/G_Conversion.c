#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    char temp[100001];
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            temp[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            temp[i] = s[i] + 32;
        }
        else if (s[i] == ',')
        {
            temp[i] = ' ';
        }
    }
    for (int i = 0; i < strlen(temp); i++)
    {
        printf("%c", temp[i]);
    }

    return 0;
}