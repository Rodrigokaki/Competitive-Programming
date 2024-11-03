#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    while(true){
        int n, k;
        cin >> n >> k;
        if(n == 0 && k == 0){
            return;
        }

        int ans = n;
        while(n >= k){
            ans += n/k;
            n = (n/k) + (n%k);
        }

        cout << ans << endl;
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
