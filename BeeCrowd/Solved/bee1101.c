#include <stdio.h>
 
int main() {
 
    int num1, num2, maior, menor, soma = 0;

    while(1){
        scanf("%i %i", &num1, &num2);

        if(num1 <= 0 || num2 <= 0){
            break;
        }

        if(num1 >= num2){
            maior = num1;
            menor = num2;
        }
        else{
            maior = num2;
            menor = num1;
        }

        soma = 0;

        for(int i=menor; i<=maior; i++){
            printf("%i ", i);

            soma += i;
        }
        printf("Sum=%i\n", soma);
    }

 
    return 0;
}