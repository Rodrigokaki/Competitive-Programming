#include <stdio.h>
 
int main() {
 
    int par[6], impar[6], evenCount = 0, oddCount = 0, input;

    for(int i=0;i<15;i++){
        scanf("%i", &input);

        if(input % 2 == 0){
            par[evenCount] = input;
            evenCount++;
        }
        else{
            impar[oddCount] = input;
            oddCount++;
        }

        if(evenCount >= 5){
            for(int j=0;j<5;j++){
                printf("par[%i] = %i\n", j, par[j]);
            }
            evenCount = 0;
        }
        else if(oddCount >= 5){
            for(int j=0;j<5;j++){
                printf("impar[%i] = %i\n", j, impar[j]);
            }
            oddCount = 0;
        }
    }

    for(int i=0;i<oddCount;i++){
        printf("impar[%i] = %i\n", i, impar[i]);
    }

    for(int i=0;i<evenCount;i++){
        printf("par[%i] = %i\n", i, par[i]);
    }
    
    
 
    return 0;
}