#include <stdio.h>

int isPerfectSquare(long long n)
{
    long long low, high, mid;

    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    low = 1;
    high = n;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        /* Compare mid with n / mid instead of mid * mid to avoid overflow */
        if (mid == n / mid && n % mid == 0)
            return 1;
        else if (mid > n / mid)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return 0;
}

int main()
{
    long long n;

    scanf("%lld", &n);

    printf("%d\n", isPerfectSquare(n));

    return 0;
}
