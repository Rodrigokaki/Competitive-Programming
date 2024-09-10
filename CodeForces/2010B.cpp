#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int a, b, ans = 6;

void solve(){
    cin >> a >> b;
    ans -= (a+b);
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}
