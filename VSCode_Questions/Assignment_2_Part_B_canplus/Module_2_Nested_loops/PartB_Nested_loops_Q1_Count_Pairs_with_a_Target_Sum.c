#include <stdio.h>

#define MAX 100000

int values[MAX];

int main()
{
    int n;
    long long target;
    long long count = 0;

    scanf("%d %lld", &n, &target);

    if (n < 0 || n > MAX)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((long long)values[i] + values[j] == target)
                count++;
        }
    }

    printf("%lld\n", count);

    return 0;
}
