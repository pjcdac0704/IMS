#include <stdio.h>
#define MAX 50
#define SIZE 10

struct Product{
    int productno;
    char productname[MAX];
    int quantity;
    float price;
};
struct Product product[SIZE];

void acceptInput(){
    for(int i=0;i<SIZE-1;i++){
        
        printf("enter product number:");
        scanf("%d \n",&product[i].productno);

        printf("enter a  product name");
        scanf("%s",product[i].productname);

        printf("enter quantity");
        scanf("%d",&product[i].quantity);

        printf("enter the price of product");
        scanf("%f",&product[i].price);
    }
}

void displayOutput(){
    for(int i=0;i<SIZE-1;i++){
        printf("product No. :%d\n",&product[i].productno);
        printf("product Name :%s\n",&product[i].productname);
        printf("product Quantity :%d\n",&product[i].quantity);
        printf("product price :%f\n",&product[i].price);
}
}

int main(){
    acceptInput();
    displayOutput();
    return 0;
}