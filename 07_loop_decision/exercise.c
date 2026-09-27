#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber = -1;
    double price = 0.0;

    while (productNumber != 0) {
        printf("Select product (1-3, 0 to quit): ");
        scanf("%d", &productNumber);

        if (productNumber == 0) {
            break;
        }

        switch (productNumber) {
            case 1: price = 2.98; break;
            case 2: price = 4.50; break;
            case 3: price = 9.98; break;
            default:
                printf("Unknown item.\n");
                price = 0.0;
                break;
        }
        printf("Selected item price: $%.2f\n\n", price);
    }
    return 0;
}
