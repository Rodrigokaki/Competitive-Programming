#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    int amountServices = 0, nServers, nRequests, indexToSearch;
    cin >> nServers;
    cin >> nRequests;
    cin >> indexToSearch;
    vector<vector<int>> times(nRequests);
    for(int i=0;i<nRequests;i++){
        cin >> times[i][0] >> times[i][1];
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

