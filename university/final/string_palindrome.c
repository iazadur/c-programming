#include <stdio.h>
#include <string.h>
int main()
{
    // Write a C program to check whether a string is a palindrome or not
    char s[1000];
    char r[1000];
    fgets(s, sizeof(s), stdin);
    strcpy(r, s);
    strrev(r);
    printf("%s", strcmp(s, r) == 0 ? "Palindrome" : "Not Palindrome");
    return 0;
}