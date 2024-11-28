#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Invoice {
    char partnum[50];
    char description[100];
    int quantity;
    float price;
};

int main()
{
    struct Invoice memo;
    printf("Enter Part Number: ");
    scanf("%s", memo.partnum);
    getchar(); 
    printf("Enter Description: ");
    scanf("%[^\n]", memo.description);
    printf("Enter Quantity: ");
    scanf("%d", &memo.quantity);
    printf("Enter Price: ");
    scanf("%f", &memo.price);

    float amount;
    amount = memo.quantity * memo.price;

    if (memo.quantity < 0 || memo.price < 0) {
        amount = 0;
    }

    printf("\n--- Invoice Summary ---\n");
    printf("Part Number: %s\n", memo.partnum);
    printf("Description: %s\n", memo.description);
    printf("Quantity: %d\n", memo.quantity);
    printf("Price: %.2f\n", memo.price);
    printf("Amount: %.2f\n", amount);

    return 0;
}

