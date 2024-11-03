#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

int n, arr[200001];
unordered_map<int, int> memo;
unordered_set<int> seen;
string color;


int f(int index){
    int cur;
    cur = arr[index]-1;
    if(seen.find(cur) != seen.end()){
        return 0;
    }
    else if(memo.find(cur) != memo.end()){
        return memo[cur];
    }
    else{
        seen.insert(cur);
        if(color[cur] == '0'){
            memo[cur] = f(cur)+1;
            return memo[cur];
        }
        return f(cur);
    }
}

void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cin >> color;

    int ans;
    for(int i=0;i<n;i++){
        seen = {};
        ans = f(i);
        if(i<n-1){
            cout << ans << " ";
        }
    }
    cout << ans << endl;
    memo.clear();
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
