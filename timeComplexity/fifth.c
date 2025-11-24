#include <stdio.h>

void reverse(int n)
{
    int count = 0;
    count++;
    int rev = 0;
    int remainder;

    count++;
    while (n != 0)
    {
        count += 4;
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    count++;
    printf("%d", count);
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(n);
}