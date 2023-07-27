#include<stdio.h>
int main(){
    // Write a program in C to count the total number of vowels or consonants in a string.
    char str[100];
    int i, vowel = 0, consonant = 0;
    scanf("%[^\n]s", str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U'){
               vowel++;
           }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            consonant++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", vowel, consonant);
}