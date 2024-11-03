#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

int x, y;
long long n;

void solve(){
    cin >> n;

    unordered_set<int> upperLine, bottomLine;
    long long nSameLine = 0;
    for(int i=0;i<n;i++){
        cin >> x >> y;

        if(y){
            upperLine.insert(x);
            if(bottomLine.find(x) != bottomLine.end()){
                nSameLine++;
            }
        }
        else{
            bottomLine.insert(x);
            if(upperLine.find(x) != upperLine.end()){
                nSameLine++;
            }
        }
    }

    long long ans = nSameLine * (n-2);

    for(int num : upperLine){
        if(upperLine.find(num+2) != upperLine.end() && bottomLine.find(num+1) != bottomLine.end()){
            ans++;
        }

        if(bottomLine.find(num-1) != bottomLine.end() && bottomLine.find(num+1) != bottomLine.end()){
            ans++;
        }
    }

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
