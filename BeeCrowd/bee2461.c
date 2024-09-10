#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamA, tamB, listaA[1000], listaB[10000];
    scanf("%i", &tamA);
    scanf("%i", &tamB);


    int validar(int num){
        for(int i=0;i<tamA;i++){
            if(listaA[i] == num){
                return 1;
            }
        }

        int hashTable[10000] = {0};

        for(int i=0;i<tamB;i++){
            int somaMenosElemento = num - listaB[i];
            hashTable[listaB[i]] = 1;
            if(hashTable[somaMenosElemento] == 1){
                return 1;
            }

        }
        return 0;
    }



    for(int i=0;i<tamA;i++){
        scanf("%i", &listaA[i]);
    }

    for(int i=0;i<tamB;i++){
        scanf("%i", &listaB[i]);
    }

    int erro = 0;
    for(int i=0;i<tamB;i++){
        printf("Procurando o %i\n", i+1);
        if(validar(listaB[i]) == 1){
            continue;
        }
        else{
            printf("%i", listaB[i]);
            erro = 1;
            break;
        }
    }
    if(erro == 0){
        printf("sim\n");
    }


    return 0;
}
