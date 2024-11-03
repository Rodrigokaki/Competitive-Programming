#include <stdio.h>
 
int main(){
 
    int num,invertAmount;
 
    while(1==1){
        invertAmount = 0;
 
        scanf("%i", &num);
 
        if(num == 0){
            break;
        }
 
 
        for(int j=0;j<num;j++){

            for(int i=invertAmount; i>0; i--){
                printf("%3i ", i+1);
            }
 
            for(int i=1;i<=num-invertAmount;i++){
                printf("%3i", i);
                if(i != (num-invertAmount)){
                    printf(" ");
                }
            }
 
        invertAmount++;
        printf("\n");
        }
        printf("\n");
    }
 
 
 
    return 0;
}