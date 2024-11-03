#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    vector<vector<int>> teste = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<teste.size();i++){
        for(int j=0;j<teste[i].size();j++){
            cout << teste[i][j] << " ";
        }
        cout << endl;
    }
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

