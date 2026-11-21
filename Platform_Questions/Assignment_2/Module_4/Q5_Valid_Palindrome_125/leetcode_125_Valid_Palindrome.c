#include <stdbool.h>

bool isPalindrome(char* s)
{
    int i = 0;
    int j = 0;

    while (s[j] != '\0')
    {
        j++;
    }

    j--;

    while (i < j)
    {
        while (i < j && !((s[i] >= 'A' && s[i] <= 'Z') ||
                          (s[i] >= 'a' && s[i] <= 'z') ||
                          (s[i] >= '0' && s[i] <= '9')))
        {
            i++;
        }

        while (i < j && !((s[j] >= 'A' && s[j] <= 'Z') ||
                          (s[j] >= 'a' && s[j] <= 'z') ||
                          (s[j] >= '0' && s[j] <= '9')))
        {
            j--;
        }

        char a = s[i];
        char b = s[j];

        if (a >= 'A' && a <= 'Z')
            a = a + 32;

        if (b >= 'A' && b <= 'Z')
            b = b + 32;

        if (a != b)
            return false;

        i++;
        j--;
    }

    return true;
}
