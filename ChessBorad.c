#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int dp[n][n];
    dp[0][0] = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                continue;

            if (i == 0)
            {
                dp[i][j] = dp[i][j - 1] + arr[i][j];
            }
            else if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + arr[i][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]) + arr[i][j];
            }
        }
    }

    printf("%d", dp[n - 1][n - 1]);
}