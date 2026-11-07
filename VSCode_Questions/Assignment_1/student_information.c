#include <stdio.h>

int main()
{
    int studentId = 101;
    int age = 19;
    float percentage = 85.50;
    char grade = 'A';
    printf("----- Student Information -----\n");
    printf("Student ID : %d\n", studentId);
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f\n", percentage);
    printf("Grade      : %c\n", grade);
    return 0;
}
