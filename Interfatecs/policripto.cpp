#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

char func(int letra, int numero, char oper){
    numero -= 48;
    if(oper == '-'){
        letra -= numero;
    }
    else{
        letra += numero;
    }

    if(letra > 122){
        letra -= 26;
    }
    else if(letra < 97){
        letra += 26;
    }

    return letra;
}

void solve(){
    string frase, numeros, ans;
    cin >> frase;
    cin >> numeros;

    int index = 0;
    char operacao = '+';
    for(int i=0;i<frase.length();i++){
        if(frase[i] == 'w'){
            ans += ' ';
            continue;
        }

        if(numeros[index] == '-'){
            operacao = '-';
            index++;
        }
        else if(numeros[index] == '+'){
            operacao = '+';
            index++;
        }

        ans += func(frase[i], numeros[index], operacao);

        index++;
    }

    cout << ans << endl;
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
