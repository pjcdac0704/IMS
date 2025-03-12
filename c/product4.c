#include <stdio.h>
#define MAX 50
#define SIZE 3

struct Product{
    int productno;
    char productname[MAX];
    int quantity;
    int price;
};
struct Product product[SIZE];

void acceptInput(){
    for(int i=0;i<SIZE-1;i++){
        
        printf("enter product number:");
        scanf("%d",&product[i].productno);

        printf("enter a  product name");
        scanf("%s",product[i].productname);

        printf("enter quantity");
        scanf("%d",&product[i].quantity);

        printf("enter the price of product");
        scanf("%d",&product[i].price);
    }
}

void showAll(){
    printf("\n All Product Details \n");
    for(int i = 0; i <SIZE-1; i++){
        printf("Product No.: %d\n",product[i].productno);
        printf("Product Name: %s\n",product[i].productname);
        printf("Product Quantity: %d\n",product[i].quantity);
        printf("Product price: %d\n",product[i].price);
    }
}

void show(int index){
    printf("\n Product Details\n");
    printf("Product No.: %d\n", product[index].productno);
    printf("Product Name: %s\n", product[index].productname);
    printf("Product Quantity: %d\n", product[index].quantity);
    printf("Product price: %d\n", product[index].price);
}

void update(int index){
    printf("\n Update Existing  %d th Product Details\n", index+1);
    printf("enter product number:");
    scanf("%d",&product[index].productno);
    printf("enter a  product name");
    scanf("%s",product[index].productname);
    printf("enter quantity");
    scanf("%d",&product[index].quantity);
    printf("enter the price of product");
    scanf("%f",&product[index].price);
}
void delete(int index){
    
}
int main(){
    int choice;
    while(1){
        printf("Inventory Management System\n");
        printf("=======================================\n");
        printf("1. Add New Product\n");
        printf("2. View All Products\n");
        printf("3. Update Product Information\n");
        printf("4. Delete product\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: acceptAll(); break;
            case 2: showAll(); break;
            case 3: update(2); break;
            // case 4: delete(1); break;
            case 5: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
    
    

  
