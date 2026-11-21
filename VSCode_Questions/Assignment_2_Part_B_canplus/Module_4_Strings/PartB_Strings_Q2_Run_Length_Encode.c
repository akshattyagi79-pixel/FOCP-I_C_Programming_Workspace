#include <stdio.h>

#define MAX 100000

char s[MAX + 1];

int main()
{
    int i = 0;

    if (scanf("%100000s", s) != 1)
        return 0;

    while (s[i] != '\0')
    {
        int count = 1;

        while (s[i + count] != '\0' && s[i + count] == s[i])
            count++;

        printf("%c%d", s[i], count);

        i += count;
    }

    printf("\n");

    return 0;
}
