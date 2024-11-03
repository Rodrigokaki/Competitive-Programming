#include <stdio.h>
 
int main() {
 
    int num;

    scanf("%i", &num);

    for(int i=0;i<10000;i++){
        if(i % num == 2){
            printf("%i\n", i);
        }
    }
 
    return 0;
}