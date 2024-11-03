#include <stdio.h>
 
int main() {
 
    int num;

    scanf("%i", &num);

    for(int i=1;i<11;i++){
        printf("%i x %i = %i\n", i, num, num*i);
    }
 
    return 0;
}