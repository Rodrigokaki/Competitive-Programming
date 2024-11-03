#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define endl "\n";

string entry;
int num = 0;

void solve(){
    cin >> entry;

    for(int i=2;i<=entry.length();i++){
        if(entry.substr(1).find(entry.substr(0,i)) != string::npos){
            continue;
        }else{
            num = i-1;
            break;
        }
    }

    if(entry.substr(entry.length()-num).find(entry.substr(0,num)) == string::npos){
        num = 0;
    }

    if(num <= entry.length()/2){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << entry.substr(0,num) << endl;
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
