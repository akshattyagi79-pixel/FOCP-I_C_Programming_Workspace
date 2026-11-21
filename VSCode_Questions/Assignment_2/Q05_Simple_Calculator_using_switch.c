#include <stdio.h>

int main()
{
    long long a, b;
    char op;

    scanf("%lld %lld %c", &a, &b, &op);

    switch (op)
    {
        case '+':
            printf("%lld\n", a + b);
            break;

        case '-':
            printf("%lld\n", a - b);
            break;

        case '*':
            printf("%lld\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%lld\n", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%lld\n", a % b);
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}
