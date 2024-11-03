#include <stdio.h>
 
int main() {
 
    int num, array[1000];

    scanf("%i", &num);

    for(int i=0, j=0 ;i<1000;i++, j++){
        if(j >= num){
            j = 0;
        }

        printf("N[%i] = %i\n", i, j);
    }
 
    return 0;
}