#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int x, y;
    cin >> x >> y;

    if(x <= 0 || y <= 0 || x == y){
        cout << "ERRO" << endl;
        return;
    }

    cout << x << " " << y << endl;
    cout << y << " " << x << endl;
    cout << y << " " << -x << endl;
    cout << x << " " << -y << endl;
    cout << -x << " " << -y << endl;
    cout << -y << " " << -x << endl;
    cout << -y << " " << x << endl;
    cout << -x << " " << y << endl;
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
