#include <stdio.h>
#define TAM 3
 
int main() {
 
    float M[TAM][TAM], input, sum = 0, result;
    int col;
    char operation;

    scanf("%i %c", &col, &operation);
    
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(int i=0;i<TAM;i++){
        sum += M[i][col];
    }

    if(operation == 'M'){
        result = sum/TAM;
    }
    else{
        result = sum;
    }

    printf("%.1f\n", result);

    return 0;
}