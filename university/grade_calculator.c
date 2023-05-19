#include <stdio.h>

int main()
{
    float marks;
    scanf("%f", &marks);
    int grade = marks / 10;
    switch (grade)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    default:
        printf("F");
    }

    return 0;
}