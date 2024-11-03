#include <stdio.h>
 
int main() {
 
    int repeat;
    float num1, num2, num3, answer;

    scanf("%i", &repeat);

    for(int i=0;i<repeat;i++){
        scanf("%f %f %f", &num1, &num2, &num3);

        answer = ((num1 * 2)+(num2 * 3)+(num3 * 5))/10;

        printf("%.1f\n", answer);
    }
 
    return 0;
}