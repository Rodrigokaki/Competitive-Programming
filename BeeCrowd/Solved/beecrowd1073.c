#include <stdio.h>
#include <math.h>
 
int main() {
 
    int num, squared;

    scanf("%i", &num);

    for(int i=2;i<=num;i+=2){
        squared = pow(i, 2);
        printf("%i^2 = %i\n",i , squared);
    }
 
    return 0;
}