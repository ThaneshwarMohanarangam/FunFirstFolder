#include <stdio.h>

int main()
{
    int n;
    int found = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                found == 1;
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }
}