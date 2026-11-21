#include <stdio.h>

long long f(long long x)
{
    if (x < 0)
        return x * x + 2 * x + 1;
    else if (x < 10)
        return 3 * x + 2;
    else
        return 5 * x - 7;
}

int main()
{
    long long x;

    scanf("%lld", &x);

    printf("%lld\n", f(x));

    return 0;
}
