#include <stdio.h>
int main()
{
    int m = 0;
    int n, a;

    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        a = n % 10;
        if (a > m)
        {
            m = a;
        }
        n = n / 10;
    }

    printf("%d", m);

    return 0;
}