#include <stdio.h>

int main() {

    int num, evenAmount = 0;

    for(int i=0;i<5;i++){
        scanf("%i", &num);

        if(num % 2 == 0){
            evenAmount++;
        }
    }

    printf("%i valores pares\n", evenAmount);

    return 0;
}
