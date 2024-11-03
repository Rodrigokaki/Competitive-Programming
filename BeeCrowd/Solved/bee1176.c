#include <stdio.h>
 
int main() {
    
    double fib[61];
    int cases, input;

    scanf("%i", &cases);

    fib[0] = 0;
    fib[1] = 1;

    for(int i=2;i<61;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i=0;i<cases;i++){
        scanf("%i", &input);

        printf("Fib(%i) = %.0f\n", input, fib[input]);
    }
 
    return 0;
}