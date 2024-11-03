#include <stdio.h>
#include <string.h>

int main() {

    int repetitions, size;
    char word[1001], temp;

    scanf("%i\n", &repetitions);

    for(int i=0;i<repetitions;i++){
        fgets(word, 1001, stdin);

        size = strlen(word)-1;

        //shifting positions 3 to right
        for(int j=0;j<size;j++){
            if((word[j] >= 65 && word[j] <= 90) || (word[j] >= 97 && word[j] <= 122)){
                word[j] += 3;
            }
        }

        //inverting string
        for(int j=0;j<size/2;j++){
            temp = word[j];
            word[j] = word[size - j - 1];
            word[size - j - 1] = temp;
        }

        //shifting half to left
        for(int j=size/2;j<size;j++){
            word[j] -= 1;
        }

        printf("%s", word);
    }


    return 0;
}
