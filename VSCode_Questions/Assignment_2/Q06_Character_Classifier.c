#include <stdio.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    switch (ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;

        default:
            if (ch >= '0' && ch <= '9')
                printf("Digit\n");
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("Consonant\n");
            else
                printf("Special Character\n");
    }

    return 0;
}
