#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

vector<int> pessoas;
unordered_set<int> grupoContaminados;
int n;

void c(int p1, int p2){
    int group1 = min(pessoas[p2], pessoas[p1]), group2 = max(pessoas[p2], pessoas[p1]);
    if(grupoContaminados.find(group1) != grupoContaminados.end() || grupoContaminados.find(group2) != grupoContaminados.end()){
        grupoContaminados.insert(group1);
    }
    for(int i=1;i<=n;i++){
        if(pessoas[i] == group2){
            pessoas[i] = group1;
        }
    }
}

void p(int p1){
    grupoContaminados.insert(pessoas[p1]);
}

void nGrupos(){
    unordered_set<int> seen;
    for(int i=1;i<=n;i++){
        seen.insert(pessoas[i]);
    }
    int amount = seen.size();
    cout << amount << endl;
}

void nGruposSeguros(){
    unordered_set<int> seen;
    for(int i=1;i<=n;i++){
        if(grupoContaminados.find(pessoas[i]) == grupoContaminados.end()){
            seen.insert(pessoas[i]);
        }
    }
    int amount = seen.size();
    cout << amount << endl;
}

void nGruposInseguros(){
    unordered_set<int> seen;
    for(int i=1;i<=n;i++){
        if(grupoContaminados.find(pessoas[i]) != contaminados.end()){
            seen.insert(pessoas[i]);
        }
    }
    int amount = seen.size();
    cout << amount << endl;
}

void pessoasInseguras(){
    vector<int> seen;
    for(int i=1;i<=n;i++){
        if(grupoContaminados.find(pessoas[i]) != contaminados.end()){
            seen.push_back(i);
        }
    }
    if(seen.size() == 0){
        cout << "vazio" << endl;
    }
    else{
        for(int i=0;i<seen.size()-1;i++){
            cout << seen[i] << " ";
        }
        cout << seen[seen.size()-1] << endl;
    }
}


void solve(){
    int e;
    cin >> n >> e;
    pessoas.resize(n+1);
    for(int i=1;i<=n;i++){
        pessoas[i] = i;
    }

    string func;
    int p1, p2;
    while(e--){
        cin >> func;
        if(func == "c"){
            cin >> p1 >> p2;
            c(p1, p2);
        }
        else if(func == "p"){
            cin >> p1;
            p(p1);
        }
        else if(func == "n"){
            nGrupos();
        }
        else if(func == "ns"){
            nGruposSeguros();
        }
        else if(func == "ni"){
            nGruposInseguros();
        }
        else if(func == "ii"){
            pessoasInseguras();
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
