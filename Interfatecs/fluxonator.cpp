#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    string entry;
    cin >> entry;

    int num;
    bool l1 = false, l2 = false, l3 = false;
    for(auto letter: entry){
        if(letter == 'A'){
            if(l1){
                l1 = false;
            }
            else{
                cout << "D";
                l1 = true;
                continue;
            }
        }
        else if(letter == 'C'){
            if(l3){
                cout << "E";
                l3 = false;
                continue;
            }
            else{
                l3 = true;
            }
        }

        if(l2){
            cout << "E";
            l2 = false;
        }
        else{
            cout << "D";
            l2 = true;
        }
    }
    cout << endl;
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
