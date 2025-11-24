#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);

    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[j] >= arr[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    printf("%d", count);
}