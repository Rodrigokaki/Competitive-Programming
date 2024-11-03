#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, x1, x2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - (4*a*c);
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    if(a != 0 && delta > 0){
        printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}