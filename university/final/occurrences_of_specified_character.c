#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], c;
    int i, count = 0;
    fgets(s, sizeof(s), stdin);
    scanf("%c", &c);

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }

    printf("character '%c' occurs %d times \n ", c, count);

    return 0;
}