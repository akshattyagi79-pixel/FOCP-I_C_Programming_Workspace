#include <stdio.h>

#define MAX 100000

long long values[MAX];

int main()
{
    int n;
    long long minDiff = -1;
    long long diff;

    scanf("%d", &n);

    if (n < 0 || n > MAX)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &values[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            diff = values[i] - values[j];

            if (diff < 0)
                diff = -diff;

            if (minDiff == -1 || diff < minDiff)
                minDiff = diff;
        }
    }

    if (minDiff == -1)
        minDiff = 0;

    printf("%lld\n", minDiff);

    return 0;
}
