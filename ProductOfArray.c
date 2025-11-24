#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int compare1(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
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

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    qsort(arr1, n, sizeof(int), compare1);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] * arr1[i]);
    }
    printf("%d", sum);
}