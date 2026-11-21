#include <stdio.h>

int main()
{
    int p1, p2;

    scanf("%d %d", &p1, &p2);

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3)
    {
        printf("Invalid Input\n");
        return 0;
    }

    if (p1 == p2)
    {
        printf("Draw\n");
        return 0;
    }

    switch (p1)
    {
        case 1:     /* Rock beats Scissors */
            if (p2 == 3)
                printf("Player 1 Wins\n");
            else
                printf("Player 2 Wins\n");
            break;

        case 2:     /* Paper beats Rock */
            if (p2 == 1)
                printf("Player 1 Wins\n");
            else
                printf("Player 2 Wins\n");
            break;

        case 3:     /* Scissors beats Paper */
            if (p2 == 2)
                printf("Player 1 Wins\n");
            else
                printf("Player 2 Wins\n");
            break;
    }

    return 0;
}
