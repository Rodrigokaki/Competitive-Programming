#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n;
    string str;
    cin >> n >> str;
    char start;
    if(str == "maiusculas"){
        start = 'A';
    }
    else{
        start = 'a';
    }

    char temp;
    for(int i = 1; i <= n; i++){
        for(int j = n-i-1; j >= 0; j--){
            cout << '.';
        }
        for(int j = 0;j < i; j++){
            temp = start+j;
            cout << temp;
        }
        cout << endl;
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
