#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    int n, nodeRefem, nodeSaida, nTerrorista, nPortas, temp;
    unordered_set<int> terroristas;
    unordered_map<int, vector<int>> hashmap;
    cin >> n >> nodeRefem >> nodeSaida;
    cin >> nTerrorista;
    for(int i=0;i<nTerrorista;i++){
        cin >> temp;
        terroristas.insert(temp);
    }
    cin >> nPortas;
    int temp1, temp2;
    for(int i=0;i<nPortas;i++){
        cin >> temp1 >> temp2;
        hashmap[temp1].push_back(temp2);
        hashmap[temp2].push_back(temp1);
    }

    bool sucesso = false;
    int curNode;
    unordered_set<int> seen;
    deque<int> toSearch;
    toSearch.push_back(nodeRefem);
    while(toSearch.size()){
        curNode = toSearch[0];
        toSearch.pop_front();
        seen.insert(curNode);
        if(curNode == nodeSaida){
            sucesso = true;
            break;
        }
        for(auto node: hashmap[curNode]){
            if(terroristas.find(node) == terroristas.end() && seen.find(node) == seen.end()){
                toSearch.push_back(node);
            }
        }
    }

    if(sucesso){
        cout << "PROSSEGUIR" << endl;
    }
    else{
        cout << "ABORTAR" << endl;
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
