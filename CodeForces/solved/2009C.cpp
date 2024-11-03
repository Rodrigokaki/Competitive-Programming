#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

int x, y, k, jumpsX, jumpsY, ans;

void solve(){
    ans = 0;
    cin >> x >> y >> k;

    jumpsX = x/k;
    if(x % k > 0){
        jumpsX++;
    }

    jumpsY = y/k;

    if(y % k > 0){
        jumpsY++;
    }

    ans = max(jumpsY*2, ((jumpsX-1)*2)+1);

    cout << ans << endl;

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
