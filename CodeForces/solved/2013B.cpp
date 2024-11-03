#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, temp;
    
    cin >> n;
    long long sum= 0, ans, last;
    for(int i=0; i<n-2; i++){
        cin >> temp;
        sum += temp;
    }

    cin >> last;
    last -= sum;
    cin >> ans;
    ans -= last;

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
