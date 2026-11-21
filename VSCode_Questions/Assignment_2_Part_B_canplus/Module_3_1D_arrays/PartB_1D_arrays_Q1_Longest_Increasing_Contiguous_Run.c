#include <stdio.h>

#define MAX 100000

int arr[MAX];

int main()
{
    int n;
    int current = 1;
    int best = 1;

    scanf("%d", &n);

    if (n < 0 || n > MAX)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            current++;
        else
            current = 1;

        if (current > best)
            best = current;
    }

    printf("%d\n", best);

    return 0;
}
