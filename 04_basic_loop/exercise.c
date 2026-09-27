#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber = -1;

    while (productNumber != 0) {
        printf("Looping... Enter 0 to break out: ");
        scanf("%d", &productNumber);
    }

    printf("Successfully exited basic loop.\n");
    return 0;
}
