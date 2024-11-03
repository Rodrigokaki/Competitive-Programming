#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    int n, num;
    vector<int> arr;
    cin >> n;
    while(n--){
        cin >> num;
        arr.push_back(num);
    }

    int index = 0;
    bool correct = true;
    for(int i=1;i<=num;i++){
        if(i != arr[index]){
            cout << i << endl;
            correct = false;
        }
        else{
            index++;
        }
    }
    if(correct){
        cout << "bom trabalho" << endl;
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
