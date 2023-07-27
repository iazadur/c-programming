#include <stdio.h>
#include <string.h>
int main()
{
    // Given a string
    // char str[ ] =123456789;
    // Write a program that displays the following:

    //     1
    //     2 3 2
    //     3 4 5 4 3
    //     4 5 6 7 6 5 4
    //     5 6 7 8 9 8 7 6 5

    int i, j;

    char str[10];
    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length / 2 + 1; i++)
    {
        // Print spaces before the numbers
        for (int space = length / 2; space > i; space--)
        {
            printf(" ");
        }

        // Print numbers in increasing order
        for (j = i; j < i * 2 + 1; j++)
        {
            printf("%c ", str[j]);
        }

        // Print numbers in decreasing order
        for (j = i * 2 - 1; j >= i; j--)
        {
            if (j < length - 1)
            {
                printf("%c ", str[j]);
            }
        }

        printf("\n");
    }
}