#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long


char isLetter(int num){
    if(num >=65 && num <= 90){
        return '1';
    }
    else if(num >= 48 && num <= 57){
        return '0';
    }
    else{
        return '2';
    }

}

void solve(){
    int arr[7];
    string antiga = "1110000", mercosul = "1110100", plate;
    while(cin >> arr[0]){
        plate = "";
        plate += isLetter(arr[0]);
        for(int i=1;i<=6;i++){
            cin >> arr[i];
            plate += isLetter(arr[i]);
        }

        if(plate == antiga){
            cout << "ANTIGA" << endl;
        }
        else if(plate == mercosul){
            cout << "MERCOSUL" << endl;
        }
        else{
            cout << "ERRO" << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 3;
    while(t--){
        solve();
    }

    return 0;
}
