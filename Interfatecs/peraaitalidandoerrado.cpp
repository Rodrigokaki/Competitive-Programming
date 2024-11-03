#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    ll n = 1;

    while (true) {
        if (n == 0) {
            break;
        }

        cin >> n;

        ll res = (ll) sqrt(n);

        if (res*res != n) {
            cout << "PERA AI... TA LIDANDO ERRADO!\n";
        } else {
            ll i = sqrt(n);

            ll ans = 1 + (i - 1) * 2;

            cout << ans << "\n";
        }
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

