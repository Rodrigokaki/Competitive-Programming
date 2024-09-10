#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int n, sum = 0, ans, temp, target, curSum;

void solve(){
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> temp;
        arr[i] = temp;
        sum += temp;
    }

    cin >> target;

    ans = (target / sum) * n;
    curSum = (target / sum) * sum;

    for(int i=0;i<n;i++){
        curSum += arr[i];
        ans++;
        if(curSum > target){
            cout << ans << endl;
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}
