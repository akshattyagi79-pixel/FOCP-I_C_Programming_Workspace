#include <stdio.h>

#define MAX 500

int matrix[MAX][MAX];

int main()
{
    int n;
    int symmetric = 1;

    scanf("%d", &n);

    if (n < 0 || n > MAX)
        return 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
