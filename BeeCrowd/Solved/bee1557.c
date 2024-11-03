#include <stdio.h>
#include <math.h>
 
int main(){
 
    int num, width, biggest, size;
 
    while(1==1){
        biggest = 1;
        width = 0;

        scanf("%i", &num);
 
        if(num == 0){
            break;
        }

        for(int i=1;i<(num*2)-1;i++){
            biggest *= 2;
        }

        size = biggest;
        do {
            size /= 10;
            ++width;
        } while (size != 0);

        for(int i=1;i<pow(2, num);i *= 2){
            for(int j=1;j<pow(2, num);j *= 2){
                printf("%*i",width, j*i);

                if(j != pow(2, (num-1))){
                    printf(" ");
                }

            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}