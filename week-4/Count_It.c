#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
   fgets(s,1001,stdin);
    int capital=0,small=0,digit=0,space=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        else if (s[i]>='0' && s[i]<='9')
        {
            digit++;
        }
        else if (s[i]==' ')
        {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
}