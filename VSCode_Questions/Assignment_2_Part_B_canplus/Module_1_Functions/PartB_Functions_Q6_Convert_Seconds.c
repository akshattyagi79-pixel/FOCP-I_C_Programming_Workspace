#include <stdio.h>

int main()
{
    long long totalSeconds;
    long long hours, minutes, seconds;

    scanf("%lld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%lld %lld %lld\n", hours, minutes, seconds);

    return 0;
}
