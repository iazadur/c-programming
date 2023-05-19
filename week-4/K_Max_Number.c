// Solve this problem using recursion.
#include <stdio.h>
#include <limits.h>
int max(int arr[], int n, int i)
{
    if (n == i)
    {
        return INT_MIN;
    }
    int max_num = max(arr, n, i + 1);
    if (arr[i] > max_num)
    {
        return arr[i];
    }
    else
    {
        return max_num;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    int max_num = max(arr, n, 0);
    printf("%d", max_num);
}