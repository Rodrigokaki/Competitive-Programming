#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

void solve(){
    int i = 1;

    while (true) {
        double a, b, c;
        double ans;

        cin >> a >> b >> c;

        if (a == b && a == c && a == 0) {
            break;
        }

        cout << "Triangle #" << i << endl;

        if (c != -1 && (a >= c || b >= c)) {
            cout << "Impossible." << endl;
            continue;
        }

        // a² + b² = c²

        if (a == -1) {
            a = sqrt(c*c - b*b);
            cout << fixed << setprecision(3) << "a = " << a << endl;
        } else if(b == -1) {
            b = sqrt(c*c - a*a);
            cout << fixed << setprecision(3) << "b = " << b << endl;
        } else if (c == -1) {
            c = sqrt(a*a + b*b);
            cout << fixed << setprecision(3) << "c = " << c << endl;
        }
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

