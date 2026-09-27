#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber = 0;

    printf("Enter product number: ");
    scanf("%d", &productNumber);

    if (productNumber < 0) {
        printf("Error: Invalid negative product number entered.\n");
    } else {
        printf("Product number registered successfully.\n");
    }
    return 0;
}
