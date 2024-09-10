#include <bits/stdc++.h>
using namespace std;

int n, cords[100001][2], startCords[2], endCords[2];
long long range, lowestDistance, b, c;

void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cords[i][0] >> cords[i][1];
    }

    cin >> startCords[0] >> startCords[1] >> endCords[0] >> endCords[1];

    lowestDistance = LLONG_MAX;
    for(int i=0; i<n; i++){
        b = pow(abs(cords[i][0] - endCords[0]), 2);
        c = pow(abs(cords[i][1] - endCords[1]), 2);

        range = b+c;

        lowestDistance = min(lowestDistance, range);
    }

    b = pow(abs(startCords[0] - endCords[0]), 2);
    c = pow(abs(startCords[1] - endCords[1]), 2);

    range = b+c;

    if(range < lowestDistance){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
