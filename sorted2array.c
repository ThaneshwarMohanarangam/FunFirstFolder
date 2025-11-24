#include <stdio.h>

int main()
{
    int n;
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
        if (arr[i] < arr1[j])
        {
            i++;
        }
        else if (arr[i] > arr1[j])
        {
            j++;
        }
        else
        {
            printf("%d ", arr[i]);
            i++;
            j++;
        }
    }
}