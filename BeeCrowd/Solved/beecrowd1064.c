#include <stdio.h>

int main() {

    int positivesAmount = 0;
    float num, totalSum = 0;

    for(int i=0;i<6;i++){
        scanf("%f", &num);

        if(num > 0){
            positivesAmount++;
            totalSum += num;
        }
    }

    printf("%i valores positivos\n", positivesAmount);
    printf("%.1f\n", totalSum/positivesAmount);

    return 0;
}
