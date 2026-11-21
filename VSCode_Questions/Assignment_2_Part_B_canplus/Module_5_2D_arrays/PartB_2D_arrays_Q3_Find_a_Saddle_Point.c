#include <stdio.h>

#define MAX 500

int matrix[MAX][MAX];
int rowMin[MAX];
int colMax[MAX];

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    if (r < 1 || c < 1 || r > MAX || c > MAX)
    {
        printf("None\n");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Minimum of every row */
    for (int i = 0; i < r; i++)
    {
        rowMin[i] = matrix[i][0];

        for (int j = 1; j < c; j++)
        {
            if (matrix[i][j] < rowMin[i])
                rowMin[i] = matrix[i][j];
        }
    }

    /* Maximum of every column */
    for (int j = 0; j < c; j++)
    {
        colMax[j] = matrix[0][j];

        for (int i = 1; i < r; i++)
        {
            if (matrix[i][j] > colMax[j])
                colMax[j] = matrix[i][j];
        }
    }

    /* First cell (row-major) that is the minimum of its row and the maximum of its column.
       Row and column numbers are printed starting from 0. */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
            {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");

    return 0;
}
