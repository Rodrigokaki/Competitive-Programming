#include <bits/stdc++.h>
using namespace std;

#define endl "\n";


void solve(){
    vector<vector<int>> teste = {{5,4},{6,1},{5,3},{3,10},{3,5}};

    for(int i=0;i<teste.size();i++){
        for(int j: teste[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    sort(teste.begin(), teste.end());

    for(int i=0;i<teste.size();i++){
        for(int j: teste[i]){
            cout << j << " ";
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
