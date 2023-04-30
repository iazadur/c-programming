#include <stdio.h>

int main()
{
    int password = 1999;
    int input_password;

    while (scanf("%d", &input_password) == 1)
    {
        if (input_password == password)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}