#include <stdio.h>

int main() {

    int cases, num1, num2, sum, temp;

    scanf("%i", &cases);

    for(int i=0;i<cases;i++){
        scanf("%i %i", &num1, &num2);

        if(num1 > num2){
            temp = num2;
            num2 = num1;
            num1 = temp;
        }

        sum = 0;

        for(int j=num1+1;j<num2;j++){
            if(j % 2 != 0){
                sum += j;
            }

        }

        printf("%i\n", sum);
    }


    return 0;
}
