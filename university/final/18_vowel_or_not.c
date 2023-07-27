#include<stdio.h>
int main(){
    // Write C Program to check whether a character is a vowel or not.
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Vowel");
    }
    else{
        printf("Not vowel");
    }
}