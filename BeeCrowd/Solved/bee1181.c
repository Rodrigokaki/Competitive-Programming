#include <stdio.h>
#define TAM 12
 
int main() {
 
    float M[TAM][TAM], input, sum = 0, result;
    int line;
    char operation;

    scanf("%i %c", &line, &operation);
    
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(int j=0;j<TAM;j++){
        sum += M[line][j];
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