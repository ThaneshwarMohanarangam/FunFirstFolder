#include <stdio.h>

void function(int n)
{
    int count = 0;

    count++;
    int i = 1;
    count++;
    int s = 1;

    while (s <= n)
    {
        count++;
        count++;
        count++;
        i++;
        s += i;
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