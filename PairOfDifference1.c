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

    int i = 0, j = 1;
    while (i < n && j < n)
    {
        int diff = arr[j] - arr[i];
        if (i != j && diff == k)
        {
            found = 1;
            break;
        }
        else if (diff < k)
            j++;
        else
            i++;

        if (i == j)
            j++;
    }
}