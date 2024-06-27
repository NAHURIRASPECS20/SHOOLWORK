// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
        char *items[5] = {"Apples", "Pears", "Oranges", "Pineapples", "Mangoes"};
        int quantity[5] = {0,0,0,0,0};
        int price[5] = {1200,600,1000,800,500};
        int select, item, entry;
        while (select != 5) {
    printf("Enter a number to select an item:\n");
    printf("1. Add product\n");
    printf("2. Show list of items\n");
    printf("3. Update list\n");
    printf("4. Total value\n");
    printf("5. Exit\n");
    scanf("%d", &select);
    
    if (select == 1) {
        // Adding an item
        printf("Enter Product:\n");
        for (int i = 0; i <= 4; i++) {
            int list = i + 1;// List number
            printf("%d. %s Quantity: %d", list, items[i], quantity[i]);
        }
        scanf("\n%d", &item);
        
        quantity[item-1] ++;
        
        printf("\n Item added successfully!\n");
        printf("Item: %s New Quantity: %d", items[item-1], quantity[item-1]);
    }
    else if (select == 2) {
        // inventory list
        for (int i = 0; i <= 4; i++) {
            int list = i + 1;
            printf("%d. %s Quantity: %d Unit Price: %d\n", list, items[i], quantity[i], price[i]);
        }
    }
    if (select == 3) { //updating an item
    printf("Enter item:");
    for (int i = 0; i <= 4; i++) {
        int list = i + 1;
        printf("%d. %s Quantity: %d\n", list, items[i], quantity[i]);
    }
    scanf("\n%d", &item);
    printf("New quantity?:");
    scanf("%d", &entry);
    
    quantity[item-1] = entry;
    printf("\n Item updated successfully!\n");
    printf("Item: %s New Quantity :%d\n", items[item-1], quantity[item-1]);
    }
    if (select == 4) {
        int itemcost;
        int total;
        
         for(int A=0; A <= 4; A++){
             itemcost = itemcost +(quantity[A] * price[A]);
         }
         printf("The total cost of all items is UGX %d\n", itemcost);
         itemcost = 0; //reset
    }
    else if (select == 5) {
        exit(0);
    }
    }
    


    return 0;
}