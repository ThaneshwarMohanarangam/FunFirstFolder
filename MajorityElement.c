#include <stdio.h>

int count(int arr[], int low, int high, int target)
{
    int c = 0;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] == target)
        {
            c++;
        }
    }
    return c;
}

int majority(int arr[], int low, int high)
{
    if (low == high)
        return arr[low];

    int mid = low + (high - low) / 2;

    int leftMajor = majority(arr, low, mid);
    int rightMajor = majority(arr, mid + 1, high);

    if (leftMajor == rightMajor)
        return leftMajor;

    int leftCount = count(arr, low, mid, leftMajor);
    int rightCount = count(arr, mid + 1, high, rightMajor);

    return leftCount > rightCount ? leftMajor : rightMajor;
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ele = majority(arr, 0, n - 1);
    int c = count(arr, 0, n - 1, ele);

    if (c > n / 2)
    {
        printf("%d", ele);
    }
    else
    {
        printf("No majority element.");
    }
}