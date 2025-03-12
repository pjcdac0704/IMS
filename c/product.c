#include <stdio.h>

struct Product{
    
    int productno;
    char productname[20];
    int quantity;
    double price;
};
struct Product p1;
void acceptInput(){
    printf(" enter number:");
    scanf("%d",&p1.productno);
    printf("\n enter name:");
    scanf("%s",p1.productname);
    printf("\n enter quantity:");
    scanf("%d",&p1.quantity);
    printf("\n enter price:");
    scanf("%d",&p1.price);
}
 
void displayOutput(){
    printf("productno:%d",p1.productno);
    printf("name:%s",p1.productname);
    printf("quantity:%d",p1.quantity);
    printf("price:%d",p1.price);
}

int main(){
    acceptInput();
    displayOutput();
    return 0;

}
