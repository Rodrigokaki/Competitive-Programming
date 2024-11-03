#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    int n, q1=0, q2=0, q3=0, q4=0, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(x > 0 && y > 0){
            q1++;
        }
        else if(x > 0 && y < 0){
            q2++;
        }
        else if(x <  0 && y < 0){
            q3++;
        }
        else if(x < 0 && y > 0){
            q4++;
        }
    }

    cout << "I = " << q1 << endl;
    cout << "II = " << q2 << endl;
    cout << "III = " << q3 << endl;
    cout << "IV = " << q4 << endl;
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
