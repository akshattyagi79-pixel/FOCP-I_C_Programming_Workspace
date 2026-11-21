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
    long long a, b;

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", gcd(a, b));

    return 0;
}
