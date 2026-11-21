#include <stdio.h>

int main()
{
    double marks, attendance;

    scanf("%lf %lf", &marks, &attendance);

    if (marks >= 90 && attendance >= 70)
        printf("Special Scholarship\n");
    else if (marks >= 75 && attendance >= 75)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}
