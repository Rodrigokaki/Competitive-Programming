#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    double tara, peso, valor, ans;
    cin >> tara;
    cin >> peso;
    cin >> valor;

    ans = valor * (peso-tara);
    cout << fixed << setprecision(2) << ans << endl;
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
