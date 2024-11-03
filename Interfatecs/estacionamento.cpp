#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    string placa;
    map<int, string> vagas;
    while(cin >> placa){
        int sum = 0;
        for(int i=0;i<7;i++){
            sum += placa[i];
        }
        sum = (sum % 15) + 1;
        if(vagas.find(sum) == vagas.end()){
            vagas[sum] = placa;
        }
    }
    map<int, string>::iterator it = vagas.begin();

    while(it != vagas.end()){
        cout << it->first << " " << it->second << endl;
        it++;
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
