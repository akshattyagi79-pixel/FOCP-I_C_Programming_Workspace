#include <stdio.h>

#define MAX 100000

int digitSums[MAX];

int digitSum(long long x)
{
    int sum = 0;

    if (x < 0)
        x = -x;

    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    int n;
    long long value;
    long long count = 0;

    scanf("%d", &n);

    if (n < 0 || n > MAX)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &value);
        digitSums[i] = digitSum(value);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSums[i] == digitSums[j])
                count++;
        }
    }

    printf("%lld\n", count);

    return 0;
}
