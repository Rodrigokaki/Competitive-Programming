#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    while(true){
        int n, k, amount = 0, temp;

        cin >> k >> n;

        if(k == 0 && n == 0){
            return;
        }
        for(int i=0;i<n;i++){
            cin >> temp;
            amount += temp;
        }
        int ans;
        ans = max(0, amount-(k*n));

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

