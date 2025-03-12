#include <stdio.h>
#define Max 50
#define SIZE 4

struct Product{
    int productno;           
    char productname[Max];          
    int quantity;            
    double price;            
};

struct Product product[SIZE];

void acceptAll(){
    for(int i = 0; i < SIZE-1; i++){
        printf("enter the product number:");
        scanf("%d",&product[i].productno);
        
        printf("enter the product name:");
        scanf("%s",product[i].productname);

        printf("enter your quantity:");
        scanf("%d",&product[i].quantity);

        printf("enter your price:");
        scanf("%d",&product[i].price);

    }
}

void showAll(){
    for(int i = 0; i <SIZE-1; i++){
        printf("productno: %d\n", product[i].productno);
        printf("productname: %s\n",product[i].productname);
        printf("quantity: %d\n",product[i].quantity);
        printf("prize: %d \n",product[i].price);
    }
}
void show(int index){
    printf("productno: %d\n", product[index].productno);
    printf("productname: %s\n",product[index].productname);
    printf("quantity: %d\n",product[index].quantity);
    printf("prize: %d \n",product[index].price);
}

void update(int index){
    printf("\n Update Existing  %d the product Details\n", index+1);
    printf("Enter new productno: ");
    scanf("%d",&product[index].productno);
    printf("Enter new product name: ");
    scanf("%s",product[index].productname);
    printf("Enter new quantity: ");
    scanf("%d",&product[index].quantity);
    printf("Enter new price: ");
    scanf("%d",&product[index].price);

}

void delete_element(int index){
    printf("\n Delete Existing  %d the product Details\n", index+1);
    product[index].productno = 0;
    product[index].productname[0] = 0;
    product[index].quantity =0;
    product[index].price = '\0';
}

int main(){
    int choice;
    while (1) {
        printf("\nInventory Management System\n");
        printf("=======================================\n");
        printf("1. Add New product\n");
        printf("2. View Inventory\n");
        printf("3. Update product\n");
        printf("4. Delete product\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: acceptAll(); break;
            case 2: showAll(); break;
            case 3: update(2); break;
            case 4: delete_element(1); break;
            case 5: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}

