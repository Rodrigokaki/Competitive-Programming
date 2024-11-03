#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

ll matrix[25][25];

void solve(){
    int nLine, nCol, x, y;

    cin >> nLine >> nCol;
    cin >> x >> y;
    x--;
    y--;

    if(x == 0){
        cout << 0 << endl;
        return;
    }
    else if(y == nCol-1){
        cout << 1 << endl;
        return;
    }
    else if(x == nLine-1){
        cout << 2 << endl;
        return;
    }
    else if(y == 0){
        cout << 3 << endl;
        return;
    }

    for(int i=0;i<nLine;i++){
        matrix[i][0] = 3;
    }
    for(int i=0;i<nCol;i++){
        matrix[nLine-1][i] = 2;
    }
    for(int i=0;i<nLine;i++){
        matrix[i][nCol-1] = 1;
    }
    for(int i=0;i<nCol;i++){
        matrix[0][i] = 0;
    }

    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            matrix[i][j] = matrix[i][j-1] + matrix[i-1][j] + matrix[i-1][j-1];
        }
    }


    cout << matrix[x][y] << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    while(t--){
        solve();
    }

    return 0;
}
