#include <stdio.h>

#define MAX 500

int matrix[MAX][MAX];
long long rowSum[MAX];
long long colSum[MAX];

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    if (r < 0 || c < 0 || r > MAX || c > MAX)
        return 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%lld", rowSum[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++)
    {
        if (j > 0)
            printf(" ");
        printf("%lld", colSum[j]);
    }
    printf("\n");

    return 0;
}
