#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantitySold = 0;
    double price = 2.98;
    double itemTotal = 0.0;

    printf("Enter quantity sold for Product 1 ($2.98): ");
    scanf("%d", &quantitySold);

    itemTotal = quantitySold * price;

    printf("Retail value of items sold: $%.2f\n", itemTotal);
    return 0;
}
