#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    double n0, n, c, lambda;


    cin >> n0 >> n >> c;

    lambda = log(2) / c;

    double t = (log(n) - log(n0)) / log(pow(2.718281828459045, -lambda));

    cout << (int)t << endl;
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
