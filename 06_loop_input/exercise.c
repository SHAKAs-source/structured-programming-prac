#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber = -1;
    int quantitySold = 0;

    while (productNumber != 0) {
        printf("Enter product code (0 to stop): ");
        scanf("%d", &productNumber);
        
        if (productNumber != 0) {
            printf("Enter inventory amount sold: ");
            scanf("%d", &quantitySold);
            printf("Logged: Product %d, Qty %d\n\n", productNumber, quantitySold);
        }
    }
    return 0;
}
