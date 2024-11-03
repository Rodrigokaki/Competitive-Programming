#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n;
    double cur = 1;
    scanf("%d", &n);
    while(n--){
        cur = 1+(1/cur);
    }

    printf("%.15f\n", cur);
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
