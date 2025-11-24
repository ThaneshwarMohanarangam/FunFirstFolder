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

    int i = 0;
    while (i < n)
    {
        int correct = arr[i] - 1;
        if (arr[correct] != arr[i])
        {
            int temp = arr[correct];
            arr[correct] = arr[i];
            arr[i] = temp;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            printf("%d", arr[i]);
            break;
        }
    }
}