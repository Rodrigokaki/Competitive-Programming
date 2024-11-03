#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    int n;
    unordered_set<char> seen;
    char temp, temp2;

    cin >> n;
    while(n--){
        cin >> temp >> temp2;
        seen.insert(temp);
        if(seen.find(temp2) != seen.end()){
            cout << "usar injecao tardia" << endl;
            return;
        }



    }
    cout << "ok" << endl;
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
