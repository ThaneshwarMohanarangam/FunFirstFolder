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

    int k;
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] - arr[j] == k) || (arr[j] - arr[i] == k))
            {
                printf("1");
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("0");
    }
}