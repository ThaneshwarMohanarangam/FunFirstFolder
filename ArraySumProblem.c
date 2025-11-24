#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    printf("Sum: \n");
    for (int i = 0; i < n; i++)
    {
        sum += (i * arr[i]);
    }
    printf("%d", sum);
}