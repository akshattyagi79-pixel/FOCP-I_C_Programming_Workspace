#include <stdio.h>
int main()
{
    int n;
    int half;
    int wing;
    int gap;
    int i, j;
    scanf("%d", &n);
    half = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        if (i <= half)
        {
            wing = i;
        }
        else
        {
            wing = n - i + 1;
        }
        gap = 2 * (half - wing) + 1;
        for (j = 1; j <= wing; j++)
        {
            printf("*");
        }
        for (j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= wing; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
