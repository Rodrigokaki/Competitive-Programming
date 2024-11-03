#include <stdio.h>
 
int main() {
 
    int code, amount;
    float price;

    scanf("%i %i", &code, &amount);

    switch(code){
        case 1:
        price = amount * 4.00;
        break;

        case 2:
        price = amount * 4.50;
        break;

        case 3:
        price = amount * 5.00;
        break;

        case 4:
        price = amount * 2.00;
        break;

        case 5:
        price = amount * 1.50;
        break;
    }
    
    printf("Total: R$ %.2f\n", price);

    return 0;
}