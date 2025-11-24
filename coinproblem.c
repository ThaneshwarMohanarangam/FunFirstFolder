#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);

    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n = 9;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += money / denominations[i];
        money = money % denominations[i];
    }
    printf("%d", count);
}