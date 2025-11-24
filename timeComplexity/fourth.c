#include <stdio.h>

void function(int n)
{
    int count = 0;
    count++;
    int c = 0;
    for (int i = n / 2; i < n; i++)
    {
        count++;
        for (int j = 1; j < n; j = 2 * j)
        {
            count++;
            for (int k = 1; k < n; k = k * 2)
            {
                count++;
                count++;
                c++;
            }
            count++;
        }
        count++;
    }
    count++;
    printf("%d", count);
}
int main()
{
    int n;
    scanf("%d", &n);

    function(n);
}