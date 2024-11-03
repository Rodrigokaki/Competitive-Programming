#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    double sum = 0;
    int num, nEntradas;
    vector<int> entradas;
    while(cin >> num){
        nEntradas++;
        sum += num;
        entradas.push_back(num);
    }
    for(double a: entradas){
        cout << fixed << setprecision(3) << a/sum << endl;
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
