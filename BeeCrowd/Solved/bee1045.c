#include <stdio.h>
 
int main() {
 
    double a, b, c, a2, b2, c2, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(c > b){
        temp = b;
        b = c;
        c = temp;
    }
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }

    a2 = a*a;
    b2 = b*b;
    c2 = c*c;

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(a2 == b2 + c2){
        printf("TRIANGULO RETANGULO\n");
        }
        if(a2 > b2 + c2){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a2 < b2 + c2){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a == b || b == c || a == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
 
    return 0;
}