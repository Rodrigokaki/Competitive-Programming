#include <stdio.h>


int main(){

    int n, start[2], matrix[100][100] = {0}, ans, hashtable[100][100] = {0};

    scanf("%i", &n);

    scanf("%i %i", &start[0], &start[1]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%i", &matrix[i][j]);
        }
    }

    int searchHigherNumberAround(int i, int j){
        int amount = 1;
        hashtable[i][j] = 1;

        if(j > 0 && hashtable[i][j-1] == 0){
            if(matrix[i][j-1] >= matrix[i][j]){
                amount += searchHigherNumberAround(i, j-1);
            }
        }

        if(i > 0 && hashtable[i-1][j] == 0){
            if(matrix[i-1][j] >= matrix[i][j]){
                amount += searchHigherNumberAround(i-1, j);
            }
        }

        if(j < n-1 && hashtable[i][j+1] == 0){
            if(matrix[i][j+1] >= matrix[i][j]){
                amount += searchHigherNumberAround(i, j+1);
            }
        }

        if(i < n -1 && hashtable[i+1][j] == 0){
            if(matrix[i+1][j] >= matrix[i][j]){
                amount += searchHigherNumberAround(i+1, j);
            }
        }

        return amount;

    }

    ans = searchHigherNumberAround(start[0]-1, start[1]-1);

    printf("%i\n", ans);


    return 0;
}
