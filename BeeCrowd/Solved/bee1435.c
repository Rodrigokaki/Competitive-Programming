#include <stdio.h>
 
int main() {
 
    int input;

    do{
        scanf("%i", &input);

        int array[input][input];

        //quadrante 1
        for(int i=0;i<=input/2;i++){
            for(int j=0;j<=input/2;j++){
                if(j <= i){
                    array[i][j] = j+1;
                }
                else{
                    array[i][j] = i+1;
                }
            }
        }

        //quadrante 2
        for(int i=0;i<=input/2;i++){
            for(int j=0;j<input/2;j++){
                if(j <= i){
                    array[i][input-j-1] = j+1;
                }
                else{
                    array[i][input-j-1] = i+1;
                }
            }
        }

        //quadrante 3
        for(int i=0;i<input/2;i++){
            for(int j=0;j<=input/2;j++){
                if(j <= i){
                    array[input-i-1][j] = j+1;
                }
                else{
                    array[input-i-1][j] = i+1;
                }
            }
        }

        //quadrante 4
        for(int i=0;i<=input/2;i++){
            for(int j=0;j<input/2;j++){
                if(j <= i){
                    array[input-i-1][input-j-1] = j+1;
                }
                else{
                    array[input-i-1][input-j-1] = i+1;
                }
            }
        }

        //Printando array
        for(int i=0;i<input;i++){
            for(int j=0;j<input;j++){
                if(j == 0){
                    printf("%3i", array[i][j]);
                }
                else{
                    printf(" %3i", array[i][j]);
                }
            }
            printf("\n");
        }

        if(input != 0){
            printf("\n");
        }

    }while(input != 0);
    
 
    return 0;
}