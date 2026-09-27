#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    double totalRetailValue = 0.0;
    double fixedPrice = 4.50;
    int itemsBought = 2;

    while (counter <= 3) {
        totalRetailValue += itemsBought * fixedPrice;
        printf("Iteration %d running total: $%.2f\n", counter, totalRetailValue);
        counter++;
    }
    return 0;
}
