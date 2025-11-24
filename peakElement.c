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

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == n - 1 || arr[mid + 1] < arr[mid]))
        {
            printf("%d", arr[mid]);
            found = 1;
            break;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            end = mid - 1;
        }
        else if (mid < n - 1 && arr[mid + 1] > arr[mid])
        {
            start = mid + 1;
        }
    }
    if (found == 0)
    {
        printf("%d", -1);
    }
}