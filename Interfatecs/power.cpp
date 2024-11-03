#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, c, sum;
    unordered_map<char, int> cartas;
    char temp;

    cin >> n >> c;
    for(int i=0;i<c;i++){
        cin >> temp;
        cartas[temp]++;
    }
    sum = n;
    sum += cartas['T'] * n;
    sum += cartas['R'] * n * (n/2);
    int ans = sum, valor;
    for(int i=0;i<cartas['S'];i++){
        valor = sum/n;
        sum -= valor;
        n--;
        sum += n * (valor/2);
        ans = max(ans, sum);
    }

    cout << ans << endl;

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

