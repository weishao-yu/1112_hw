#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m < 0)
    {
        m = -m;
    }
    if (n < 0)
    {
        n = -n;
    }
    if (m > n)
    {
        printf("%d", m);
    }
    else
    {
        printf("%d", n);
    }
    return 0;
}
