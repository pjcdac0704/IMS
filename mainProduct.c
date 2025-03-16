#include <stdio.h>
#include <conio.h>
#define Max 50
#define SIZE 3

struct Product {
    int productno;
    char productname[Max];
    int quantity;
    float price;
};

struct Product product[SIZE]; 

void acceptAllDetail(struct Product *ptrProduct) {
    printf("Enter Product Number:\n");
    scanf("%d", &ptrProduct->productno);

    printf("Enter Product Name:\n");
    scanf("%s", ptrProduct->productname);

    printf("Enter Quantity:\n");
    scanf("%d", &ptrProduct->quantity);

    printf("Enter Price: ");
    scanf("%f", &ptrProduct->price);
}

void show() {
    for (int i = 0; i < SIZE; i++) {
        printf("Enter details for product %d:\n", i + 1);
        acceptAllDetail(&product[i]);

        printf("\nProduct %d:\n", i + 1);
        printf("Product Number: %d\n", product[i].productno);
        printf("Product Name: %s\n", product[i].productname);
        printf("Quantity: %d\n", product[i].quantity);
        printf("Price: %.2f\n", product[i].price);
    }
}
void showAll(struct Product *product) {
    for (int i = 0; i < SIZE; i++) { 
        printf("\nProduct %d Details:\n", i + 1);
        printf("Product Number: %d\n", (product + i)->productno);
        printf("Product Name: %s\n", (product + i)->productname);
        printf("Quantity: %d\n", (product + i)->quantity);
        printf("Price: %.2f\n", (product + i)->price);
    }
}


void update(struct Product *product, int index) {
    

    printf("\n Update Ecd CPxisting %d the product Details\n", index + 1);
    printf("Enter new productno: ");
    scanf("%d", &(product + index)->productno);
    printf("Enter new product name: ");
    scanf("%s", (product + index)->productname);
    printf("Enter new quantity: ");
    scanf("%d", &(product + index)->quantity);
    printf("Enter new price: ");
    scanf("%f", &(product + index)->price);
}

void delete_element(struct Product *product, int index) {
    
    printf("\n Delete Existing %d th Product Details\n", index + 1);
    (product + index)->productno = 0;
    (product + index)->productname[0] = '\0';  
    (product + index)->quantity = 0;
    (product + index)->price = 0.0;
}

int main() {
    int choice, index;

    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add New product\n");
        printf("1. details of product\n");
        printf("2. Update product\n");
        printf("3. Delete product\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                show();  break;
            case 2:
                showAll();  break;
            case 3:
                update(product, index - 1); break;
            case 4:
                delete_element(product, index - 1);break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
