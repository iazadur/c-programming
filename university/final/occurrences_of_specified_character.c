#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    char character;
    int count = 0;
    fgets(line, 100, stdin);
    scanf("%c", &character);
    for(int i = 0; i < strlen(line); i++){
        if(line[i] == character){
            count++;
        }
    }
    printf("The number of occurrences of %c in the given line is %d\n", character, count);
    return 0;
}