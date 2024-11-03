#include <stdio.h>

int main() {

    int beginning, end, num1, num2, oddSum = 0;

    scanf("%i %i", &num1, &num2);

    if(num1 >= num2){
        end = num1;
        beginning = num2;
    }
    else{
        end = num2;
        beginning = num1;
    }

    for(int i = beginning+1; i < end; i++){
        if(i % 2 != 0){
            oddSum += i;
        }
    }

    printf("%i\n", oddSum);

    return 0;
}
