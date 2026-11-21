#include <stdio.h>

#define MAX 500

int matrix[MAX][MAX];

int main()
{
    int r, c;
    int peaks = 0;

    scanf("%d %d", &r, &c);

    if (r < 0 || c < 0 || r > MAX || c > MAX)
        return 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isPeak = 1;

            if (i > 0 && matrix[i][j] <= matrix[i - 1][j])
                isPeak = 0;

            if (i < r - 1 && matrix[i][j] <= matrix[i + 1][j])
                isPeak = 0;

            if (j > 0 && matrix[i][j] <= matrix[i][j - 1])
                isPeak = 0;

            if (j < c - 1 && matrix[i][j] <= matrix[i][j + 1])
                isPeak = 0;

            if (isPeak)
                peaks++;
        }
    }

    printf("%d\n", peaks);

    return 0;
}
