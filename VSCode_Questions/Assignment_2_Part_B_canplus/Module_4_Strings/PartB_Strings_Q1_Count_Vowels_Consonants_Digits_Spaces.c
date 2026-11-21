#include <stdio.h>
#include <ctype.h>

#define MAX 100000

char line[MAX + 2];

int main()
{
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; i++)
    {
        char ch = line[i];

        if (isalpha((unsigned char)ch))
        {
            char lower = tolower((unsigned char)ch);

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit((unsigned char)ch))
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);

    return 0;
}
