#include <stdio.h>

int main()
{
    long long units, bill;

    scanf("%lld", &units);

    if (units < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    if (units <= 100)
        bill = units * 2;
    else if (units <= 200)
        bill = 100 * 2 + (units - 100) * 3;
    else
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;

    printf("%lld\n", bill);

    return 0;
}
