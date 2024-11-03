#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    double dinheiro, custo, juros;
    cin >> dinheiro;
    cin >> custo;
    cin >> juros;

    if(dinheiro >= custo){
        cout << "pode comprar agora" << endl;
        return;
    }

    juros /= 100;

    int meses = 0;
    while(dinheiro < custo){
        dinheiro += dinheiro*juros;
        meses++;
    }

    if(meses == 1){
        cout << "possivel em 1 mes" << endl;
    }
    else{
        cout << "possivel em " << meses << " meses" << endl;
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
