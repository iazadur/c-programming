#include <stdio.h>
#include <string.h>
int main()
{
    char s[201];
    gets(s);
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U'))
        {
            count++;
        }
    }
    printf("%d", count);
}