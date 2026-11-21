#include <stdio.h>

#define EPS 0.000000001

int isNinety(double x)
{
    double diff = x - 90;

    if (diff < 0)
        diff = -diff;

    return diff < EPS;
}

int main()
{
    double a, b, c;
    double diff;

    scanf("%lf %lf %lf", &a, &b, &c);

    diff = (a + b + c) - 180;

    if (diff < 0)
        diff = -diff;

    if (a <= 0 || b <= 0 || c <= 0 || diff > EPS)
        printf("Invalid\n");
    else if (a < 90 && b < 90 && c < 90)
        printf("Acute\n");
    else if (isNinety(a) + isNinety(b) + isNinety(c) == 1)
        printf("Right\n");
    else
        printf("Obtuse\n");

    return 0;
}
