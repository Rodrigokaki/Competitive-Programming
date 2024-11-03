#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

int debug = 3;

void solve(){
    int n, range1, range2, arr[10000], x, y, amount, temp;

    cin >> n;
    cin >> range1 >> range2;

    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp >= range1 && temp <= range2){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }

    while(debug--){
        cin >> x >> y;
        amount = 0;
        for(int i=x;i<=y;i++){
            amount += arr[i];
        }
        cout << amount << endl;
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
