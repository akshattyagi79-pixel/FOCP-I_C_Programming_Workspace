#include <stdio.h>

int main()
{
    int N;
    int found = 0;

    scanf("%d", &N);

    for (int a = 1; a <= N; a++)
    {
        for (int b = a + 1; b <= N; b++)
        {
            for (int c = b + 1; c <= N; c++)
            {
                if ((long long)a * a + (long long)b * b == (long long)c * c)
                {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}
