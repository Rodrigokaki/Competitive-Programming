#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define endl "\n";

char entry[400001];
int num = 0, low, high, i;

void solve(){
    while(cin >> entry)

    low = entry.length()/2;
    high = entry.length();
    while(low <= high){
        i = (low+high)/2;
        if(entry.substr(1).find(entry.substr(0,i)) != string::npos){
            num = max(num, i);
            low = i+1;
        }else{
            high = i-1;
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
