#include <stdio.h>
#include <string.h>

int main(){
    char entry[1000];
    int open, ans, t;

    scanf("%i", &t);
    while(t--){
        open = 0; ans = 0;
        scanf("%s", entry);

        for(int i=0;i<strlen(entry);i++){
            if(entry[i] == '<'){
                open++;
            }
            else if(entry[i] == '>'){
                if(open > 0){
                    ans++;
                    open--;
                }
            }
        }

        printf("%i\n", ans);
    }

    return 0;
}