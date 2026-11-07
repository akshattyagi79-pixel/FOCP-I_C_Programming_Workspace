#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    printf("Enter marks of five subjects (out of 100): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    printf("Total Marks = %d out of 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
