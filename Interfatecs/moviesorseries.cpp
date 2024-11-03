#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n = 1;
    int cont = 1;

    int i = 0;

    int curSum = 0;
    int hellen = 26;
    int ian = 29;

    while (cont) {

        cin >> n;

        if (n == 0) {
            cont = false;
            break;
        } else if (n == 99) {
            cout << "HELLEN BIRTHDAY, GO OUT FOR DANCING\n";
            i = 0;
            curSum = 0;
            hellen++;
            continue;
        } else if (n == 98) {
            cout << "IAN BIRTHDAY, GO OUT FOR DINNER\n";
            i = 0;
            curSum = 0;
            ian++;
            continue;
        } else {
            curSum += n;
            i++;
        }

        if (i == 2) {
            curSum += (hellen + ian);

            if (curSum % 2 == 1) {
                cout << "WATCH MOVIE\n";
            }
            else {
                cout << "WATCH SERIES\n";
            }


            curSum = 0;
            i = 0;
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

