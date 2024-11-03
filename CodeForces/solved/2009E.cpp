#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

long long n, k, halfSum, sum1, sum2, ans;
int cut, low, high;

void solve(){
    ans = INFINITY;
    cin >> n >> k;

    halfSum = (n*((k*2) + n - 1))/4;

    low = 0;
    high = n+1;
    while(low <= high){
        cut = (low+high)/2;
        sum1 = (cut*((k*2) + cut - 1))/2;
        sum2 = ((n-cut)*((k+cut)*2+n-cut-1))/2;
        ans = min(ans, abs(sum1-sum2));
        if(ans <= 1){
            break;
        }
        if(sum1 < halfSum){
            low = cut+1;
        }
        else{
            high = cut-1;
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