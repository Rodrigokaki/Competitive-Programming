#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int n, k, temp;

void solve(){
    cin >> n >> k;
    vector<int> arr(n), arrCopy(n);

    for(int i=0;i<n;i++){
    cin >> arr[i];
    }
    arrCopy = arr;

    for(int j=0;j<n;j++){
        for(int i=0;i+k<n;i++){
            if(arr[i] > arr[i+k]){
                temp = arr[i];
                arr[i] = arr[i+k];
                arr[i+k] = temp;
            }
        }
    }

    sort(arrCopy.begin(), arrCopy.end());

    int amount = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != arrCopy[i]){
            amount++;
        }
    }

    if(amount == 0){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
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
