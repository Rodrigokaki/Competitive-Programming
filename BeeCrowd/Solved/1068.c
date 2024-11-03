#include <stdio.h>
#include <string.h>

int main() {
    char entry[1000];
    int open;

    while(scanf("%s", entry) == 1){
        open = 0;
        for(int i=0;i<strlen(entry);i++){
            if(entry[i] == '('){
                open++;
            }
            else if(entry[i] == ')'){
                open--;
                if(open < 0){
                    break;
                }
            }
        }

        if(open == 0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    } 

    return 0;
}
