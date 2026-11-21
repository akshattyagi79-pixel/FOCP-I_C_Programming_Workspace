#include <stdio.h>

long long gcd(long long a, long long b)
{
    long long temp;

    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    long long n, m;
    long long count = 0;

    scanf("%lld %lld", &n, &m);

    for (long long x = 1; x <= m; x++)
    {
        if (gcd(x, n) == 1)
            count++;
    }

    printf("%lld\n", count);

    return 0;
}
