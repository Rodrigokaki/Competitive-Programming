#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int x, y, sum = 0;

    cin >> x >> y;

    sum = (x*y)-1;

    if(sum % 2 == 1){
        cout << "[:=[primeiro]" << endl;
    }else{
        cout << "[segundo]=:]" << endl;
    }
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
