#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch;
        scanf(" %c", &ch);
        int temp = ch - 'a';
        a[temp]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (a[i] != 0)
        {
            printf("%c", i + 97);
            a[i]--;
        }
    }


}