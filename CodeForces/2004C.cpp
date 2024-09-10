#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int n, k, nums[200001];

void solve(){
    cin >> n >> k;
    for(int i=0; i<n;i++){
        cin >> nums[i];
    }
    sort(nums, nums + n, greater<int>());

    int ans = 0;
    for(int i=0;i<n-1;i+=2){
        if(nums[i]-(nums[i+1]+k) >= 0){
            ans += nums[i]-(nums[i+1]+k);
            k = 0;
        }
        else{
            k -= nums[i] - nums[i+1];
        }
    }
    if(n % 2 != 0){
        ans += nums[n-1];
    }
    cout << ans << '\n';
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
