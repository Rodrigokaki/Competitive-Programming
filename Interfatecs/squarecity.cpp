#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, sum = 0;
    cin >> n;

    for(int i = 3;i<=n;i+= 4){
        sum += ((i*2)-3)*2;
    }

    cout << sum << endl;
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
