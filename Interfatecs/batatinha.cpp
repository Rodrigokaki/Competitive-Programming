#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ll long long

struct hashPair{
    size_t operator() (const pair<int, int> &x) const{
        return x.first ^ x.second;
    }
};

vector<pair<int, int>> ans, arrCur;
int nAns = INFINITY, n, xEnd, yEnd, xBegin, yBegin;
vector<vector<int>> matrix;
unordered_set<pair<int, int>, hashPair> seen;


void f(int x, int y){
    pair<int, int> pairCur;
    if(x == xEnd && y == yEnd){
        if(arrCur.size() < nAns){
            nAns = arrCur.size();
            ans = arrCur;
        }
        return;
    }

    seen.insert(make_pair(x, y));

    if(x > 0){
        pairCur = make_pair(x-1, y);
        if(matrix[pairCur.first][pairCur.second] == 1 && seen.find(pairCur) == seen.end()){
            arrCur.push_back(pairCur);
            f(pairCur.first, pairCur.second);
            arrCur.pop_back();
            seen.erase(pairCur);
        }
    }
    if(x < n-1){
        pairCur = make_pair(x+1, y);
        if(matrix[pairCur.first][pairCur.second] == 1 && seen.find(pairCur) == seen.end()){
            arrCur.push_back(pairCur);
            f(pairCur.first, pairCur.second);
            arrCur.pop_back();
            seen.erase(pairCur);
        }
    }

    if(y > 0){
        pairCur = make_pair(x, y-1);
        if(matrix[pairCur.first][pairCur.second] == 1 && seen.find(pairCur) == seen.end()){
            arrCur.push_back(pairCur);
            f(pairCur.first, pairCur.second);
            arrCur.pop_back();
            seen.erase(pairCur);
        }
    }

    if(y < n-1){
        pairCur = make_pair(x, y+1);
        if(matrix[pairCur.first][pairCur.second] == 1 && seen.find(pairCur) == seen.end()){
            arrCur.push_back(pairCur);
            f(pairCur.first, pairCur.second);
            arrCur.pop_back();
            seen.erase(pairCur);
        }
    }
}

void solve(){
    string temp;
    cin >> n;
    cin >> xBegin >> yBegin;
    cin >> xEnd >> yEnd;
    xBegin--;
    xEnd--;
    yBegin--;
    yEnd--;

    matrix.resize(n);

    for(int i=0;i<n;i++){
        cin >> temp;
        for(auto letra: temp){
            matrix[i].push_back(letra-48);
        }
    }

    f(xBegin, yBegin);

    cout << xBegin+1 << " " << yBegin+1 << endl;
    for(auto par: ans){
        cout << par.first+1 << " " << par.second+1 << endl;
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
