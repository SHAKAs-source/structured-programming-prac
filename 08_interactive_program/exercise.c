#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber = -1; 
    int quantitySold = 0;
    double totalRetailValue = 0.0;
    int hasError = 0;

    printf("--- Online Retailer Sales Calculator ---\n");
    printf("Product List:\n");
    printf("1 - $2.98\n2 - $4.50\n3 - $9.98\n4 - $4.49\n5 - $6.87\n");
    printf("----------------------------------------\n");
    printf("Enter 0 for the product number to exit.\n\n");

    while (productNumber != 0) {

        printf("Enter product number (1-5, or 0 to quit): ");
        scanf("%d", &productNumber);

        if (productNumber < 0) {
            printf("Error: Invalid negative product number entered. Exiting without output.\n");
            hasError = 1;
            break;
        }

        if (productNumber == 0) {
            break;
        }

        printf("Enter quantity sold: ");
        scanf("%d", &quantitySold);

        if (quantitySold < 0) {
            printf("Error: Quantity cannot be negative. Exiting without output.\n");
            hasError = 1;
            break;
        }
        
        double price = 0.0;
        
        switch (productNumber) {
            case 1: price = 2.98; break;
            case 2: price = 4.50; break;
            case 3: price = 9.98; break;
            case 4: price = 4.49; break;
            case 5: price = 6.87; break;
            default:
                printf("Invalid product number. Please enter a number between 1 and 5.\n");
                price = 0.0;
                break;
        }

        totalRetailValue += quantitySold * price;
        printf("\n");
    }

    if (hasError == 0) {
        printf("\n========================================\n");
        printf("Total retail value of all items sold: $%.2f\n", totalRetailValue);
        printf("========================================\n");
    }

    return 0;
}
