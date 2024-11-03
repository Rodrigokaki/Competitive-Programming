#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, k;
    while(cin >> n >> k){
        set<int> seen;
        for(int i=1;i<=n;i++){
            seen.insert(i);
        }

        int counter = 1;
        set<int>::iterator it = seen.begin();
        while(seen.size() > 1){
            if(it == seen.end()){
                it = seen.begin();
            }
            if(counter == k){
                it = seen.erase(it);
                counter = 0;
            }
            else{
                it++;
            }
            counter++;
        }
        cout << *seen.begin() << endl;
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
