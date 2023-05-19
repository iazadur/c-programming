#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int age[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (age[i] > age[j])
            {
                int temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
       int mid = n / 2;
         
        printf("%d %d\n", age[mid - 1],age[mid]);
    }else{
        int mid = n / 2;
        printf("%d\n", age[mid]);
    }

}