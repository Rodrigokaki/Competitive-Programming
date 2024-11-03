#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, maxAltura, nComandos, inicio, fim, quantidade, maior = 0;
    cin >> n >> maxAltura >> nComandos;
    vector<int> mapa(n+1);
    for(int i=0;i<nComandos;i++){
        cin >> inicio >> fim >> quantidade;
        for(int j=inicio;j<=fim;j++){
            mapa[j] += quantidade;
            if(mapa[j] > maior){
                maior = mapa[j];
            }
        }
        if(maior > maxAltura){
            cout << "invalida" << endl;
            return;
        }
    }
    cout << maior << endl;
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
