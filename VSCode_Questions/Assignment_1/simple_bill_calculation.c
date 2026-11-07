#include <stdio.h>

int main()
{
    float price;
    int quantity;
    float totalBill;
    printf("Enter the price of one item: ");
    scanf("%f", &price);
    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);
    totalBill = price * quantity;
    printf("Total Bill = %.2f\n", totalBill);
    return 0;
}
