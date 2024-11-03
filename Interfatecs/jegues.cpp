#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    map<string, array<long long, 3>> cavalos;
    string nome;
    long long t1, t2, t3;

    while(cin >> nome){
        cin >> t1 >> t2 >> t3;
        cavalos[nome] = {t1, t2, t3};
    }

    vector<string> colocacao(3);
    vector<long long> tempos(3, INFINITY);
    cout << "T1 ";
    for(auto cavalo: cavalos){
        if(cavalo.second[0] < tempos[0]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = tempos[0];
            colocacao[1] = colocacao[0];

            tempos[0] = cavalo.second[0];
            colocacao[0] = cavalo.first;
        }
        else if(cavalo.second[0] < tempos[1]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = cavalo.second[0];
            colocacao[1] = cavalo.first;
        }
        else if(cavalo.second[0] < tempos[2]){
            tempos[2] = cavalo.second[0];
            colocacao[2] = cavalo.first;
        }
    }
    for(int i=0;i<2;i++){
        cout << colocacao[i] << " ";
    }
    cout << colocacao[2] << endl;

    tempos.clear();
    tempos.push_back(INFINITY);
    tempos.push_back(INFINITY);
    tempos.push_back(INFINITY);
    cout << "T2 ";
    for(auto cavalo: cavalos){
        if(cavalo.second[1] < tempos[0]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = tempos[0];
            colocacao[1] = colocacao[0];

            tempos[0] = cavalo.second[1];
            colocacao[0] = cavalo.first;
        }
        else if(cavalo.second[1] < tempos[1]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = cavalo.second[1];
            colocacao[1] = cavalo.first;
        }
        else if(cavalo.second[1] < tempos[2]){
            tempos[2] = cavalo.second[1];
            colocacao[2] = cavalo.first;
        }
    }
    for(int i=0;i<2;i++){
        cout << colocacao[i] << " ";
    }
    cout << colocacao[2] << endl;


    tempos.clear();
    tempos.push_back(INFINITY);
    tempos.push_back(INFINITY);
    tempos.push_back(INFINITY);
    cout << "CHEGADA ";
    for(auto cavalo: cavalos){
        if(cavalo.second[2] < tempos[0]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = tempos[0];
            colocacao[1] = colocacao[0];

            tempos[0] = cavalo.second[2];
            colocacao[0] = cavalo.first;
        }
        else if(cavalo.second[2] < tempos[1]){
            tempos[2] = tempos[1];
            colocacao[2] = colocacao[1];

            tempos[1] = cavalo.second[2];
            colocacao[1] = cavalo.first;
        }
        else if(cavalo.second[2] < tempos[2]){
            tempos[2] = cavalo.second[2];
            colocacao[2] = cavalo.first;
        }
    }
    for(int i=0;i<2;i++){
        cout << colocacao[i] << " ";
    }
    cout << colocacao[2] << endl;
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
